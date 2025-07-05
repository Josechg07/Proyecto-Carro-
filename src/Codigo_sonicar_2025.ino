#include <NewPing.h>  // Para los sensores de ultrasonido
#include <Servo.h>    // Para el servomotor
#include <MPU6050.h>
#include <Wire.h>
#include <Pixy2.h>
Pixy2 pixy;
MPU6050 copio;
int16_t ax, ay, az;
int16_t gx, gy, gz;
const int in1 = A2;    // Pin IN1 del controlador de motor
const int in2 = 7;    // Pin IN2 del controlador de motor
const int en = 5;      // Pin ENA (PWM) para controlar la velocidad
const int servo = 10;  // Pin de señal del servo
const int td = 3;
const int ed = 2;
const int ti = 9;  // CAMBIADO: Estaba en el pin 13
const int ei = 4;
const int MPU = 0x68;
const int boton = 8;
const int luz = 6;
const int vel = 130;   // Velocidad normal del robot (0-255)
const int dist = 400;  // Distancia máxima para los sensores (en cm)
const int recto = 105;
const int agi = 170;  // Para giros de 90 grados a la izquierda
const int agd = 30;   // Para giros de 90 grados a la derecha
const int aci = 165;  // Pequeña corrección para alejarse de la pared derecha
const int acd = 45;   // Pequeña corrección para alejarse de la pared izquierda
const int aai = 140;
const int aad = 70;
int derecha = 0;
int uderecha = 0;
int izquierda = 0;
int uizquierda = 0;
float anculo = 0.0;
int giros = 0;
int so;
unsigned long rosamelano = -4000;  // Para asegurar que el primer giro pueda ocurrir
unsigned long tiempoUltimoArreglo = -150;
unsigned long utiempo = 0;
float stiempo = 0.0;
Servo giro;

NewPing sonar[2] = {
  NewPing(td, ed, dist),
  NewPing(ti, ei, dist)
};

void setup() {
  Serial.begin(9600);
  Serial.println("Iniciando sistema del robot...");
  Wire.begin();
  copio.initialize();
  giro.attach(servo);
  giro.write(recto);  // Ruedas rectas al inicio
  pixy.init();
  /*while(copio.testConnection()){
    Serial.println("Error al conectar giroscopio.");
    copio.initialize();
    delay(100);
  }*/
  Serial.println("Giroscopio conectado correctamente.");
  // Configurar pines de los motores
  pinMode(en, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(luz, OUTPUT);
  // Configurar pin del botón con resistencia pull-up interna
  pinMode(boton, INPUT_PULLUP);

  // Adjuntar el servo al pin correspondiente

  // Esperar a que se presione el botón para comenzar
  while (digitalRead(boton) == LOW) {
    delay(50);  // Pequeña pausa para no saturar el procesador
  }
  analogWrite(luz, 255);
  delay(1000);
  utiempo = millis();
}

void leerSensorDerecha() {
  uderecha = derecha;
  derecha = sonar[0].ping_cm();
  if (derecha == 0) {  // Si el sensor falla, usa la última lectura válida
    derecha = uderecha;
  }
  Serial.print("D: ");
  Serial.print(derecha);
  Serial.print(" ");
}

void leerSensorIzquierda() {
  uizquierda = izquierda;
  izquierda = sonar[1].ping_cm();
  if (izquierda == 0) {  // Si el sensor falla, usa la última lectura válida
    izquierda = uizquierda;
  }
  Serial.print("I: ");
  Serial.print(izquierda);
  Serial.print(" ");
}

void giroscopio() {
  copio.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
  stiempo = (millis() - utiempo) / 1000.0;
  utiempo = millis();
  float rad = gz / 131.0;
  anculo += (rad * stiempo);
  if (anculo > 180) anculo -= 360;
  if (anculo < -180) anculo += 360;
  Serial.print("Angulo: ");
  Serial.print(anculo);
}

void pelao(int num) {
int i;
for(i=0; i<num; i++){
  giroscopio();
  Serial.println();
  delay(100);
}
}

void pix() {
  int i;
  pixy.ccc.getBlocks();
  if (pixy.ccc.numBlocks) {
    so = pixy.ccc.blocks[0].m_signature;
  }
  delay(10);
}

void crotolamo() {
  giro.write(recto);
  analogWrite(en, vel);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
}

void lamocroto() {
  analogWrite(en, vel);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
}

void detener() {
  giro.write(recto);
  analogWrite(en, 0);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}

void girarDerecha() {
  Serial.println("Iniciando giro a la derecha...");
  digitalWrite(LED_BUILTIN, HIGH);
  analogWrite(en, vel);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  /*if(izquierda > 40){
      giro.write(agi);
      delay(500);
  }
  while (anculo > -65) {
    giroscopio();
    Serial.println();
    giro.write(agd);
    delay(40);
  }*/
  pelao(15);
  while (anculo > -80) {
    giroscopio();
    Serial.println();
    lamocroto();
    Serial.print("Lamocroto ");
    giro.write(agi);
    delay(40);
  }
  anculo += 85.5;
  crotolamo();
  rosamelano = millis();
  giros++;
  Serial.print("Giro completado. Total de giros: ");
  Serial.println(giros);
}

void girarIzquierda() {
  Serial.println("Iniciando giro a la izquierda...");
  digitalWrite(LED_BUILTIN, HIGH);
  analogWrite(en, vel);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  /*if(derecha > 40){
      giro.write(agd);
      delay(500);
  }
  while (anculo < 65) {
    giroscopio();
    Serial.println();
    giro.write(agi);
    delay(40);
  }*/
  pelao(15);
  while (anculo < 80) {
    giroscopio();
    Serial.println();
    lamocroto();
    Serial.print("Lamocroto ");
    giro.write(agd);
    delay(40);
  }
  anculo -= 85.5;
  crotolamo();
  rosamelano = millis();
  giros++;
  Serial.print("Giro completado. Total de giros: ");
  Serial.println(giros);
}


void loop() {
  crotolamo();
  Serial.print(giros);
  if (giros >= 12) {
    Serial.println("Trayecto finalizado.");
    delay(2500);  // Espera 2 segundos
    detener();
    while (true) {  // Bucle infinito para detener el programa
      // No hacer nada
    }
  }
  leerSensorIzquierda();
  leerSensorDerecha();
  giroscopio();
  pix();
  Serial.println();

  if (izquierda > 100 && ((millis() - rosamelano) > 4000)) {
    pelao(10);
    girarIzquierda();
  } else if (derecha > 100 && ((millis() - rosamelano) > 4000)) {
    pelao(10);
    girarDerecha();
  } else if (so == 1) {
    giro.write(acd);
    pelao(15);
    giro.write(aci);
    pelao(15);
    giro.write(recto);
    pelao(10);
    so = 0;
  } else if (so == 2) {
    giro.write(aci);
    pelao(15);
    giro.write(acd);
    pelao(15);
    giro.write(recto);
    pelao(10);
    so = 0;
  } else if (derecha < 20 && (millis() - tiempoUltimoArreglo > 150)) {
    Serial.println("Correccion -> Izquierda");
    giro.write(aci);
    delay(120);
    tiempoUltimoArreglo = millis();
    anculo -= 5;
  } else if (izquierda < 20 && (millis() - tiempoUltimoArreglo > 150)) {
    Serial.println("Correccion -> Derecha");
    giro.write(acd);
    delay(120);
    tiempoUltimoArreglo = millis();
    anculo += 5;
  } else if (anculo > 30) {
    while (anculo > 30) {
      giroscopio();
      Serial.println();
      giro.write(aad);
      delay(10);
      crotolamo();
    }
  } else if (anculo < -30) {
    while (anculo < -30) {
      giroscopio();
      Serial.println();
      giro.write(aai);
      delay(10);
      crotolamo();
    }
  } else {
    crotolamo();
  }
  delay(50);  // Pequeña pausa al final del bucle para estabilidad
}
