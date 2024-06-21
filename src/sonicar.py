# Importar la biblioteca RPi.GPIO para interactuar con los pines GPIO de la Raspberry Pi
import RPi.GPIO as GPIO
import time  # Importar la biblioteca time para controlar los tiempos de espera
import threading  # Importar la biblioteca threading para crear hilos de ejecución

# Configuración de los pines del servo, motor DC y sensores (usando numeración BOARD)
SERVO_PIN = 11  # Pin físico 11 (GPIO 17 en BCM)
MOTOR_IN1 = 18  # Pin físico 18 (GPIO 24 en BCM)
MOTOR_IN2 = 16  # Pin físico 16 (GPIO 23 en BCM)
MOTOR_EN = 22   # Pin físico 22 (GPIO 25 en BCM)

TRIGGER_PIN_FRONT = 38  # Pin físico 38 (GPIO 20 en BCM)
ECHO_PIN_FRONT = 40     # Pin físico 40 (GPIO 21 en BCM)
TRIGGER_PIN_RIGHT = 33  # Pin físico 33 (GPIO 13 en BCM)
ECHO_PIN_RIGHT = 31     # Pin físico 31 (GPIO 6 en BCM)
TRIGGER_PIN_LEFT = 37   # Pin físico 37 (GPIO 26 en BCM)
ECHO_PIN_LEFT = 35      # Pin físico 35 (GPIO 19 en BCM)

# Inicialización de los pines del servo, motor DC y sensores
GPIO.setwarnings(False)  # Desactivar advertencias de GPIO
GPIO.setmode(GPIO.BOARD)  # Configuración del modo de numeración de pines físicos
GPIO.setup(SERVO_PIN, GPIO.OUT)  # Configurar el pin del servo como salida
GPIO.setup(MOTOR_IN1, GPIO.OUT)  # Configurar el pin IN1 del motor como salida
GPIO.setup(MOTOR_IN2, GPIO.OUT)  # Configurar el pin IN2 del motor como salida
GPIO.setup(MOTOR_EN, GPIO.OUT)  # Configurar el pin ENABLE del motor como salida
GPIO.output(MOTOR_IN1, GPIO.LOW)  # Establecer el pin IN1 en bajo
GPIO.output(MOTOR_IN2, GPIO.LOW)  # Establecer el pin IN2 en bajo
GPIO.setup(TRIGGER_PIN_FRONT, GPIO.OUT)  # Configurar el pin de trigger frontal como salida
GPIO.setup(ECHO_PIN_FRONT, GPIO.IN)  # Configurar el pin de echo frontal como entrada
GPIO.setup(TRIGGER_PIN_RIGHT, GPIO.OUT)  # Configurar el pin de trigger derecho como salida
GPIO.setup(ECHO_PIN_RIGHT, GPIO.IN)  # Configurar el pin de echo derecho como entrada
GPIO.setup(TRIGGER_PIN_LEFT, GPIO.OUT)  # Configurar el pin de trigger izquierdo como salida
GPIO.setup(ECHO_PIN_LEFT, GPIO.IN)  # Configurar el pin de echo izquierdo como entrada

# Configuración del PWM para el servo y motor DC
pwm_servo = GPIO.PWM(SERVO_PIN, 50)  # Crear PWM en el pin del servo con 50 Hz
pwm_servo.start(7.5)  # Posición inicial del servo (90 grados)
pwm_motor = GPIO.PWM(MOTOR_EN, 1000)  # Crear PWM en el pin ENABLE del motor con 1000 Hz
pwm_motor.start(0)  # Reducir la velocidad del motor al iniciar (25% del ciclo de trabajo)

# Variables para el contador de giros
giros = 0
vueltas_completas = 0

# Función para establecer el ángulo del servo
def set_angle(angle):
    duty_cycle = angle / 18 + 2  # Calcular el ciclo de trabajo correspondiente al ángulo
    GPIO.output(SERVO_PIN, True)  # Activar el pin del servo
    pwm_servo.ChangeDutyCycle(duty_cycle)  # Cambiar el ciclo de trabajo del PWM
    time.sleep(1)  # Esperar 1 segundo para que el servo se mueva
    GPIO.output(SERVO_PIN, False)  # Desactivar el pin del servo
    pwm_servo.ChangeDutyCycle(10)  # Detener el PWM

# Función para medir la distancia usando un sensor ultrasónico
def medir_distancia(trigger_pin, echo_pin):
    GPIO.output(trigger_pin, GPIO.HIGH)  # Enviar pulso alto al pin de trigger
    time.sleep(0.00001)  # Esperar 10 microsegundos
    GPIO.output(trigger_pin, GPIO.LOW)  # Enviar pulso bajo al pin de trigger

    start_time = time.time()  # Registrar el tiempo de inicio
    stop_time = start_time

    while GPIO.input(echo_pin) == 0:  # Esperar a que el pin de echo se ponga alto
        start_time = time.time()
    while GPIO.input(echo_pin) == 1:  # Esperar a que el pin de echo se ponga bajo
        stop_time = time.time()

    time_elapsed = stop_time - start_time  # Calcular el tiempo transcurrido
    distance = (time_elapsed * 34300) / 2  # Calcular la distancia en cm
    return distance

# Función para realizar giros automáticos basados en la distancia medida
def giro_automatico():
    global giros, vueltas_completas
    while vueltas_completas < 4:
        try:
            # Medir las distancias frontales, derecha e izquierda
            distancia_frontal = medir_distancia(TRIGGER_PIN_FRONT, ECHO_PIN_FRONT)
            distancia_derecha = medir_distancia(TRIGGER_PIN_RIGHT, ECHO_PIN_RIGHT)
            distancia_izquierda = medir_distancia(TRIGGER_PIN_LEFT, ECHO_PIN_LEFT)
            print(f"Distancia frontal: {distancia_frontal:.2f} cm, derecha: {distancia_derecha:.2f} cm, izquierda: {distancia_izquierda:.2f} cm")

            if distancia_frontal <= 50:
                print("Objeto detectado a 50 cm o menos. Girando a la derecha.")
                set_angle(135)  # Ajustar ángulo para girar a la derecha
                GPIO.output(MOTOR_IN1, GPIO.LOW)
                GPIO.output(MOTOR_IN2, GPIO.HIGH)
                pwm_motor.ChangeDutyCycle(25)
                time.sleep(1)  # Tiempo del giro
                GPIO.output(MOTOR_IN1, GPIO.HIGH)
                GPIO.output(MOTOR_IN2, GPIO.LOW)
                time.sleep(1)
                set_angle(90)  # Volver el servo a posición inicial
                
            if distancia_frontal <= 20:
                print("Objeto detectado a 20 cm o menos. Deteniendose")
                GPIO.output(MOTOR_IN1, GPIO.LOW)
                GPIO.output(MOTOR_IN2, GPIO.HIGH)
                time.sleep(0.5)
                GPIO.output(MOTOR_IN1, GPIO.LOW)
                GPIO.output(MOTOR_IN2, GPIO.HIGH)
                set_angle(45)
                time.sleep(1)
                GPIO.output(MOTOR_IN1, GPIO.HIGH)
                GPIO.output(MOTOR_IN2, GPIO.LOW)
                set_angle(135)


                giros += 1
                if giros == 4:
                    vueltas_completas += 1
                    giros = 0
                    print(f"Vuelta completa {vueltas_completas} realizada.")
               
                if giros == 12:
                    print("12 giros completados. Manteniendo el motor encendido por 0.5 segundos adicionales.")
                    GPIO.output(MOTOR_IN1, GPIO.LOW)
                    GPIO.output(MOTOR_IN2, GPIO.LOW)
                    pwm_motor.ChangeDutyCycle(25)
                    time.sleep(0.5)
                    GPIO.output(MOTOR_IN1, GPIO.HIGH)
                    GPIO.output(MOTOR_IN2, GPIO.LOW)
                    break

            if distancia_derecha > 100:
                print("Espacio detectado a la derecha mayor a 100 cm. Girando a la derecha.")
                set_angle(135)  # Ajustar ángulo para girar a la derecha
                GPIO.output(MOTOR_IN1, GPIO.LOW)
                GPIO.output(MOTOR_IN2, GPIO.LOW)
                pwm_motor.ChangeDutyCycle(25)
                time.sleep(1)  # Tiempo del giro
                GPIO.output(MOTOR_IN1, GPIO.HIGH)
                GPIO.output(MOTOR_IN2, GPIO.LOW)
                set_angle(90)  # Volver el servo a posición inicial

            if distancia_izquierda > 100:
                print("Espacio detectado a la izquierda mayor a 100 cm. Girando a la izquierda.")
                set_angle(45)  # Ajustar ángulo para girar a la izquierda
                GPIO.output(MOTOR_IN1, GPIO.LOW)
                GPIO.output(MOTOR_IN2, GPIO.LOW)
                pwm_motor.ChangeDutyCycle(25)
                time.sleep(1)  # Tiempo del giro
                GPIO.output(MOTOR_IN1, GPIO.HIGH)
                GPIO.output(MOTOR_IN2, GPIO.LOW)
                set_angle(90)  # Volver el servo a posición inicial

        except Exception as e:
            print(f"Error en giro_automatico: {e}")

        time.sleep(0.25)

# Función para iniciar el motor automáticamente
def motor_auto():
    try:
        GPIO.output(MOTOR_IN1, GPIO.HIGH)  # Establecer IN1 en alto
        GPIO.output(MOTOR_IN2, GPIO.LOW)  # Establecer IN2 en bajo
        pwm_motor.ChangeDutyCycle(25)  # Establecer el ciclo de trabajo del motor en 25%
        print("Motor en marcha automática")
    except Exception as e:
        print(f"Error en motor_auto: {e}")

print("\n")
print("El servo motor inicia en posición vertical (90 grados).")
print("El motor DC arranca automáticamente a velocidad reducida.")
print("\n")

set_angle(90)  # Establecer el ángulo inicial del servo en 90 grados

# Iniciar los hilos para el giro automático y arranque del motor
threading.Thread(target=giro_automatico, daemon=True).start()
#threading.Thread(target=motor_auto, daemon=True).start()

try:
    while True:  # Mantener el programa corriendo indefinidamente
        time.sleep(1)

finally:
    pwm_servo.stop()  # Detener el PWM del servo
    pwm_motor.stop()  # Detener el PWM del motor
    GPIO.cleanup()  # Limpiar la configuración de GPIO