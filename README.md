# SONICAR
# Logbook

This repository contains information about the sonicar team's robot for the 2025 World Robot Olympiad (WRO) Future Engineers competition. The design of the robot was taked from thingiverse, but was adapted to the necesities of the team.

# Team

### José Ricardo Chacón


![Photo member José Ricardo Chacón](https://github.com/Josechg07/Proyecto-Carro-/blob/55446197586f12a40b8935138c6959be21e2112d/others/Images-for-readmi/Foto%20Riqui%20miembro%20wro%202025.jpg)

Hey there!! I'm José Ricardo from Venezuela. This is my second time participating in the WRO on the Future Engineers category and this have been too much amazing!! On the first time, last year, my team and I got the opportunity to go to the competition on Italy because we got the first place in the regional leaderboard. This is an entire new experience, even that is the second time!! Creating this tipe of robot, obtaining new knowledge, meeting new people, is an incredible experience that I love. Is incredible what we can obtain with this tipe of challenges, and I'm ready to beat this!! Also, I like F1, cars, robots, program, and the tennis.

### Andrés José Casenave


![Photo member Andrés José Casenave](https://github.com/Josechg07/Proyecto-Carro-/blob/55446197586f12a40b8935138c6959be21e2112d/others/Images-for-readmi/Foto%20Cheto%20miembro%20wro%202025.jpg)

Hello! I’m Andrés from Venezuela, and this is my second time participating in the WRO Future Engineers category. Last year, my team and I got first place in the regional leaderboard. We qualified for the National Contest, where we had the opportunity to meet new people and see their way of confronting the challenge. I like robotics, cars, motorcycles, and basically anything with an engine on it.


### Juán Andrés Perez


![Photo member Juán Andrés Perez](https://github.com/Josechg07/Proyecto-Carro-/blob/55446197586f12a40b8935138c6959be21e2112d/others/Images-for-readmi/Foto%20Juanchi%20miembro%20wro%202025.jpg)

Hey, I'm Juan Pérez from Venezuela! This is my first time joining the WRO on the Future Engineers category and I am having a blast! I had never tried it before, but after starting, creating this robot has been an amazing experience. I love challenging myself! From crosswords to chess, you name it, and this whole experience feels like an even bigger challenge I'm ready to beat!


# Photo Team


![Photo Team](https://github.com/Josechg07/Proyecto-Carro-/blob/79d9914715bfaa9ab9f91b5d2c46b010a129eff2/t-photos/Foto%20equipo.jpg)


# Challenge
The WRO 2024 Future Engineers – Autonomous Vehicle Challenge invites participants to conceptualize, construct, and program a robotic car capable of navigating a race track without human intervention. The layout of the track changes each round, requiring the robot to adapt in real-time. The challenge is divided into two core components: completing multiple laps while avoiding randomly placed obstacles, and executing an accurate parallel parking maneuver.

Participants are encouraged to apply advanced engineering principles including computer vision, sensor integration, and motion control, with a strong emphasis on innovation, precision, and system reliability.

This competition highlights essential stages of the engineering cycle, such as:

- Vehicle Dynamics: Designing effective and reliable mobility systems.

- Obstacle Navigation: Implementing strategies to identify and respond to traffic markers (red and green indicators) in compliance with event rules.

- Project Documentation: Demonstrating the development process, design rationale, and teamwork through transparent and collaborative repositories, such as GitHub.

Teams are evaluated not only on their robot's performance during the rounds but also on the clarity and depth of their engineering documentation and the ingenuity of their solution. The challenge aims to spark interest in STEM fields by offering hands-on experience in robotics, problem-solving, and collaborative innovation.

Discover more about the challenge by visiting the official site, or [*here*](https://wro-association.org/wp-content/uploads/WRO-2025-Future-Engineers-Self-Driving-Cars-General-Rules.pdf)




# Photos of the robot eustakio


| ![Front](https://github.com/Josechg07/Proyecto-Carro-/blob/41f3d437534a720e299889bcc8a9a7bcce44639d/v-photos/Front.jpg) | ![Back](https://github.com/Josechg07/Proyecto-Carro-/blob/41f3d437534a720e299889bcc8a9a7bcce44639d/v-photos/Back.jpg) |
|:--:|:--:|
| Front | Back |

| ![Left](https://github.com/Josechg07/Proyecto-Carro-/blob/41f3d437534a720e299889bcc8a9a7bcce44639d/v-photos/Left.jpg) | ![Right](https://github.com/Josechg07/Proyecto-Carro-/blob/41f3d437534a720e299889bcc8a9a7bcce44639d/v-photos/Right.jpg) |
|:--:|:--:|
| Left | Right |

| ![Top](https://github.com/Josechg07/Proyecto-Carro-/blob/166d8a673ec1860a324e92338a4c4fa5a8784ea5/v-photos/Top.jpg) | ![Botton](https://github.com/Josechg07/Proyecto-Carro-/blob/41f3d437534a720e299889bcc8a9a7bcce44639d/v-photos/Botton.jpg) |
|:--:|:--:|
| Top | Botton |




# Video of our robot on: [*Youtube*](https://youtu.be/QaQttkg_3CM)








# Mechanic Management


Desde la batería se derivan dos conductores: uno correspondiente al polo negativo (GND) y otro al polo positivo (V+). El conductor positivo está interrumpido por un interruptor mecánico, que actúa como un control de encendido, permitiendo o bloqueando el flujo de corriente hacia el resto del sistema.

Posterior al interruptor, el conductor se conecta al terminal VM (Voltage Motor) del puente H, responsable de alimentar los motores. Desde esta misma línea de alimentación, se deriva una conexión hacia el pin VIN del Arduino, que permite suministrar energía a la placa. El conductor negativo de la batería se conecta directamente al pin GND del Arduino, cerrando así el circuito de alimentación de la placa.

Adicionalmente, en el puente H se conecta un pin de alimentación (VCC) hacia la línea positiva de la protoboard para alimentar los componentes de lógica interna del puente.

El puente H dispone de tres pines de control: PWM A, IN1 e IN2.

PWM A está conectado al pin digital 10 del Arduino y permite la modulación por ancho de pulso (PWM) para el control de velocidad.

IN1 e IN2, conectados a los pines 12 y 13 respectivamente, determinan la dirección de rotación del motor conectado al canal A.


Las salidas del puente H (OUT1 y OUT2) están conectadas directamente al motor de corriente continua. Estas salidas permiten controlar el sentido y velocidad del motor en función de las señales de entrada enviadas desde el microcontrolador.

Finalmente, el motor está acoplado a las ruedas mediante un eje común que atraviesa un sistema de diferencial mecánico, el cual optimiza la maniobrabilidad del vehículo en curvas, distribuyendo el par de manera eficiente entre las ruedas y reduciendo el desgaste prematuro de las mismas.


### Motor DC Lego

<table border="1" cellspacing="0" cellpadding="10">
  <tr>
    <td width="50%" align="center">
      <img src="https://grobotronics.com/images/thumbnails/570/570/detailed/133/67820074_960x960_3_grobo.jpg" width="250">
    </td>
    <td width="50%" valign="top">
      <b>Specifications:</b>
      <ul>
        <li><b>Voltage:</b> 4.8V</li>
        <li><b>Gear Ratio:</b> 1:48</li>
        <li><b>Speed:</b> 650 ± 31% rpm</li>
        <li><b>Torque:</b> 1.2 ± kg·cm</li>
        <li><b>Weight:</b> 30g</li>
      </ul>
    </td>
  </tr>
</table>


A direct current (DC) motor runs on DC power. In this project, it propels the vehicle. The motor’s speed and direction are controlled via the L298 module, allowing the car to move forward or backward as needed. DC motors are known for their simplicity and efficiency, making them a popular choice in robotics.


### Motor Driver

<table border="1" cellspacing="0" cellpadding="10">
  <tr>
    <td width="50%" align="center">
      <img src="https://www.sparkfun.com/media/catalog/product/cache/a793f13fd3d678cea13d28206895ba0c/1/4/14450a-01.jpg" width="250">
    </td>
    <td width="50%" valign="top">
      <b>Specifications:</b>
      <ul>
        <li><b>Power supply voltage:</b> VM = 15V max, VCC = 2.7-5.5V</li>
        <li><b>Output current:</b> lout = 1.2A (average) / 3.2 A (peak) </li>
        <li><b>Standby control to save power</b></li>
        <li><b>CW/CCW/short-brake/stop motor control modes</b></li>
        <li><b>Built-in thermal shutdown cirtuit and low-voltage</b></li>
      </ul>
    </td>
  </tr>
</table>


The L298N motor driver controls the speed and direction of a DC motor. It receives signals from the Arduino and translates them into commands that the motor can understand, allowing for precise propulsion control. The L298N is a dual H-Bridge driver capable of handling two DC motors, but this project only uses one. Its ability to handle high voltages and currents makes it ideal for small-scale robotic and car projects.


### Steering


### Servo Motor

<table border="1" cellspacing="0" cellpadding="10">
  <tr>
    <td width="50%" align="center">
      <img src="https://grobotronics.com/images/thumbnails/570/570/detailed/133/67820072_grey_1_grobo.jpg" width="250">
    </td>
    <td width="50%" valign="top">
      <b>Specifications:</b>
      <ul>
        <li><b>Rotation angle:</b> 270° </li>
        <li><b>Operating speed:</b> 0.12 ± 20% sec/60° at 4.8V </li>
        <li><b>Stall torque:</b> 1.8 kg·cm (6V) </li>
        <li><b>Weight:</b> 12.5g </li>
      </ul>
    </td>
  </tr>
</table>


A servo motor is used to control the vehicle’s direction. Servos are precision motors that rotate to specific angles, ideal for tasks requiring accurate movements. In this project, the servo is used to steer the front wheels, allowing the vehicle to change direction when obstacles are detected. Servo motors are essential in robotics for their precise control.


### Chasis


Here are the top view of the internal and external measurements, and .stl file of the chassis 3D. The design of the robot was personalized for our necessities of the competition.


![Photo top view of the external measurements of the chassis 3D](https://github.com/Josechg07/Proyecto-Carro-/blob/b10d7031ee4dc45292df1ba2dba1cf9054451a36/others/Images-for-readmi/Top%20view%20of%20external%20measurements.jpg)


![Photo top view of the internal measurements of the chassis 3D](https://github.com/Josechg07/Proyecto-Carro-/blob/b10d7031ee4dc45292df1ba2dba1cf9054451a36/others/Images-for-readmi/Top%20view%20of%20internal%20measurements.jpg)


![Photo top view of the .stl file of the chassis 3D](https://github.com/Josechg07/Proyecto-Carro-/blob/b10d7031ee4dc45292df1ba2dba1cf9054451a36/others/Images-for-readmi/Top%20view%20chassis%20(.stl).jpg)



### Creation of the Robot


Here are information about the process of creation of the robot of the team and images of the same.


# Mobility Management


El arduino mega es el cerebro del robot, se encuentra conectado con dos sensores de ultrasonido hc-sr04, uno a la derecha y otro a la izquierda, para poder medir los bordes, si la distancia que hay de uno de los dos lados es mayor a 1m, entonces ya el robot sabe si girar a la derecha o a la izquierda. Una vez determinada la dirección, se procede a mandar la información al servomotor para determinar si gira a la derecha o a la izquierda, aquí se le envía un ángulo determinado. A su vez, se le está enviando constantemente la información al motor DC para que el carro pueda avanzar constantemente. 

El robot cuenta con un giroscopio, el cual es capaz de determinar la velocidad angular y determinar una vez cuando el carro haya girado 90°, cuando lo hace, sigue en línea recta hasta llegar a la siguiente curva. Este ciclo se repite hasta que el carro cuente un total de 12 giros (4 giros por vuelta) y se detiene.


### Li-Po Battery 2200 mAH

A lithium battery was used to power the components, providing the current they need to operate. This battery has a large charge capacity and considerable voltage, which helps reduce the need for frequent recharges and increases work efficiency.


### Arduino Mega

<table border="1" cellspacing="0" cellpadding="10">
  <tr>
    <td width="50%" align="center">
      <img src="https://store.arduino.cc/cdn/shop/files/A000067_01.iso_ac4058f0-048a-497d-a924-c5e64ad45dfa_839x630.jpg?v=1727098253" width="250">
    </td>
    <td width="50%" valign="top">
      <b>Specifications:</b>
      <ul>
        <li><b>Microcontroller:</b> Arduino Mega </li>
        <li><b>Pins:</b> 70 </li>
        <li><b>SRAM:</b> 8KB </li>
        <li><b>Frequency:</b> 16 MHz </li>
        <li><b>Flash memory:</b> 256 KB </li>
        <li><b>Input voltage:</b> 6-20V </li>
      </ul>
    </td>
  </tr>
</table>

### Camera HuskyLens

<table border="1" cellspacing="0" cellpadding="10">
  <tr>
    <td width="50%" align="center">
      <img src="https://tienda.bricogeek.com/6961-large_default/huskylens-camara-de-vision-artificial.jpg" width="250">
    </td>
    <td width="50%" valign="top">
      <b>Specifications:</b>
      <ul>
        <li><b>Microcontroller:</b> Kendryte K210 </li>
        <li><b>SRAM:</b> 8 MB </li>
        <li><b>Resolution:</b> 320 x 240 Pixels </li>
        <li><b>Flash memory:</b> 16 MB NOR Flash </li>
        <li><b>Frame rate:</b> Up to 60 FPS </li>
        <li><b>Frequency:</b> 400 MHz (up to 800MHz) </li>
      </ul>
    </td>
  </tr>
</table>

### Laser Sensors (VL53L0X-V2)

<table border="1" cellspacing="0" cellpadding="10">
  <tr>
    <td width="50%" align="center">
      <img src="https://dinastiatecnologica.com/wp-content/uploads/2023/10/Captura-de-pantalla-2023-10-14-115914-600x438.png" width="250">
    </td>
    <td width="50%" valign="top">
      <b>Specifications:</b>
      <ul>
        <li><b>Operating Voltage:</b> 2.6V - 5.5V </li>
        <li><b>Distance Range:</b> 3cm to 2m </li>
        <li><b>Field of View (FoV):</b> 25° </li>
        <li><b>Max Measurement Rate:</b> Up to 50 MHz </li>
        <li><b>Power Consumption:</b> 20 mW </li>
        <li><b>Dimensions:</b> 21mm x 13mm x 5 mm </li>
      </ul>
    </td>
  </tr>
</table>

Two VL53L0X-V2 laser sensors are used for distance measurement. These sensors detect object distances within a range by emitting a light beam and measuring the time it takes to return. This allows for object detection and autonomous movement. These sensors are commonly used in projects like this due to their precision and fewer problems compared to other types. In this work, they are crucial to achieving vehicle autonomy.


### Ultrasonic Sensor (HC-SR04)

<table border="1" cellspacing="0" cellpadding="10">
  <tr>
    <td width="50%" align="center">
      <img src="https://www.sparkfun.com/media/catalog/product/cache/a793f13fd3d678cea13d28206895ba0c/1/5/15569-Ultrasonic_Distance_Sensor_-_HC-SR04-01a.jpg" width="250">
    </td>
    <td width="50%" valign="top">
      <b>Specifications:</b>
      <ul>
        <li><b>Operating Voltage:</b> 5.5V DC </li>
        <li><b>Distance Range:</b> 2cm to 4m </li>
        <li><b>Field of View (FoV):</b> 15° </li>
        <li><b>Max Measurement Rate:</b> 20 MHz </li>
        <li><b>Power Consumption:</b> 15 mA </li>
        <li><b>Dimensions:</b> 45mm x 20mm x 15 mm </li>
      </ul>
    </td>
  </tr>
</table>
The HC-SR04 ultrasonic sensor is used for obstacle detection. It measures the distance to nearby objects by emitting an ultrasonic pulse and measuring the time it takes to bounce back. The distance is calculated based on the time the sound travels to the object and back. These sensors are widely used in robotics due to their precision and low cost and are fundamental to this project’s navigation capabilities.


### Protoboard

<table border="1" cellspacing="0" cellpadding="10">
  <tr>
    <td width="50%" align="center">
      <img src="https://robot.com.ve/wp-content/uploads/2021/08/AR0005_Protoboard-830-puntos_v3.jpg" width="250">
    </td>
    <td width="50%" valign="top">
      <b>Specifications:</b>
      <ul>
        <li><b>Tie-Points:</b> 830 (full-size) </li>
        <li><b>Dimensions:</b> 165mm x 55mm x 10mm </li>
        <li><b>Pitch (Hole SPacing):</b> 2.54mm (0.1 inch) </li>
        <li><b>Voltage Rating:</b> Up to 12V DC (recommended) </li>
        <li><b>Current Rating:</b> Up to 1 A (ideal < 500 mA per line) </li>
        <li><b>Wire COmpatibility:</b> 22-28 AWG solid-core jumper wires </li>
      </ul>
    </td>
  </tr>
</table>


# Code for each one of the component


## DC Motor

Given the fact that the Arduino has an ESP chip, the PWM signals have to be sent using the ( ```ledc``` ) utility.

```ino
void crotolamo() { // Void para que avance el carro
  giro.write(recto); // Poner ruedas rectas
  analogWrite(en, vel); // Poner la velocidad normal
  digitalWrite(in1, HIGH); // El carro avanza
  digitalWrite(in2, LOW);
}
void retroceder() { // Void para que el carro retroceda
  giro.write(recto); // Poner ruedas rectas
  analogWrite(en, vel); // Poner velocidad normal
  digitalWrite(in1, LOW); // El carro retrocede
  digitalWrite(in2, HIGH);
}
void permatrago() { // Void para que el carro se detenga
  giro.write(recto); // Poner ruedas rectas
  analogWrite(en, 0); // Poner la velocidad en 0
  digitalWrite(in1, LOW); // El carro no avanza ni retrocede
  digitalWrite(in2, LOW);
}
```

## Servo Motor



```ino
void gd() { // Void para que el carro gire a la derecha
  digitalWrite(LED_BUILTIN, HIGH); // Prender el led del Arduino para mostrar el giro
  analogWrite(en, vel); // Aumentar la velocidad del carro
  digitalWrite(in1, HIGH); // Asegurarse que el carro avanza
  digitalWrite(in2, LOW);
  giro.write(120); // Rotar las ruedas para que gire a la derecha
  while (derecha > 60) { // Parar el giro cuando se cumplan ciertas distancias
    sd(); // Continuar leyendo los valores
    delay(20);
  }
  crotolamo(); // Reiniciar el carro
  digitalWrite(LED_BUILTIN, LOW); // Indicar que acabo el giro
  rosamelano = millis(); // Guardar el tiempo en el que termina el giro
}
void gi() { // Void para que el carro gire a la izquierda
  digitalWrite(LED_BUILTIN, HIGH); // Prender el led del Arduino para mostrar el giro
  analogWrite(en, vel); // Aumentar la velocidad del carro
  digitalWrite(in1, HIGH); // Asegurarse que el carro avanza
  digitalWrite(in2, LOW);
  giro.write(65); // Rotar las ruedas para que gire a la izquierda
  while(izquierda > 60){ // Parar el giro cuando se cumplan ciertas distancias
    si(); // Continuar leyendo los valores
    delay(20); 
  }
  crotolamo(); // Reiniciar el carro
  digitalWrite(LED_BUILTIN, LOW); // Indicar que acabo el giro
  rosamelano = millis(); // Guardar el tiempo en el que termina el giro
} 
```

# Obstacle Management

### Open Round


### Final Round


### Cube Detection


Para la estrategia de esquivar obstáculos, contamos con una cámara husky lens, la cual nos permite identificar el color de los obstáculos, ya sea rojo o verde. Para determinar si el objetivo se encuentra cerca o lejos, usamos la información que nos proporciona la cámara, como lo es el ancho y alto, en píxeles, del objeto, si el área es pequeña, sabemos que el obstáculo está lejos, lo que permite que el carro pueda esquivarlo desde lejos. Pero si el obstáculo se encuentra cerca, el carro retrocede (para evitar chocar) y luego lo esquiva por su lado correspondiente. Esta lógica se mezcla con la de la primera ronda para poder lograr las 3 vueltas sin problema alguno.


### Parking Wall Detection


### Robot Construction Guide


### Cost List







# Installation :books:
### System Requirements
* [Beak](https://beakit.com/)
<img src="https://t.bkit.co/w_66a28fc18c347.gif" />
