#include <Servo.h>
int giros = 0;
int e1 = 2;
int e2 = 3;
int e3 = 4;
int t1 = 5;
int t2 = 6;
int t3 = 7;
int in1 = 8;
int in2 = 9;
int en = 10;
int ser = 11;
int vel = 135;
unsigned long td1, td2, ti1, ti2;
int recto = 85;
Servo giro;
int tiempo, frente, derecha, izquierda;
int s = 20;

// Variables para el temporizador
unsigned long startTime;
const unsigned long duration = 46000; // 43 segundos en milisegundos

void setup() {
  pinMode(e1, INPUT);
  pinMode(e2, INPUT);
  pinMode(e3, INPUT);
  pinMode(t1, OUTPUT);
  pinMode(t2, OUTPUT);
  pinMode(t3, OUTPUT);
  pinMode(en, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  giro.attach(ser);
  Serial.begin(9600);

  // Arrancar el motor y el temporizador
  startTime = millis(); // Guardar el tiempo inicial
}
void parar() {
  analogWrite(en, 0); // Detener el motor
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  giro.write(100); // Asegurarse de que el servo esté en posición neutral
  Serial.println("Carro detenido");
}
void arrancar() {
  analogWrite(en, vel);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
}

int ping(int TriggerPin, int EchoPin) {
  long duration, distanceCm;
  digitalWrite(TriggerPin, LOW);  // para generar un pulso limpio ponemos a LOW 4us
  delayMicroseconds(4);
  digitalWrite(TriggerPin, HIGH);  // generamos Trigger (disparo) de 10us
  delayMicroseconds(10);
  digitalWrite(TriggerPin, LOW);

  duration = pulseIn(EchoPin, HIGH);  // medimos el tiempo entre pulsos, en microsegundos

  distanceCm = duration * 10 / 292 / 2;  // convertimos a distancia, en cm d=V*t
  return distanceCm;
}

void corregir () {
  frente = ping(t1, e1);
  delay(s);
  derecha = ping(t2, e2);
  delay(s);
  izquierda = ping(t3, e3);
  delay(s);
}


void retro() {
  analogWrite(en, 200);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
}

void gi() {
  giro.write(55);
}

void gd() {
  giro.write(143);
  analogWrite(en, 100);
}
void loop() {
  // Verificar si han pasado 43 segundos
  if (giros >= 12) {
    delay(1500);
    parar(); // Detener el carro
    delay(10000);
    return; // Salir del loop para evitar seguir ejecutando
  }
  giro.write(recto);
  arrancar();
  frente = ping(t1, e1);
  delay(25);
  derecha = ping(t2, e2);
  delay(25);
  izquierda = ping(t3, e3);
  Serial.print("Frente:");
  Serial.println(frente);
  Serial.print("Derecha:");
  Serial.println(derecha);
  Serial.print("Izquierda:");
  Serial.println(izquierda);
  delay(25);

  if (frente < 65 && izquierda < derecha && derecha > 90) {
    /* if ((td2 - td1) > 1000 ) {
       giros = giros + 1;
      }*/
    giros = giros + 1;
    Serial.println("Primer if");
    gd();
    while (frente < 66) {
      frente = ping(t1, e1);
      delay(25);
      Serial.println("while derecha");
      Serial.print("Frente:");
      Serial.println(frente);
      Serial.print("Derecha:");
      Serial.println(derecha);
      Serial.print("Izquierda:");
      Serial.println(izquierda);
      delay(100);
    }
    derecha = ping(t2, e2);
    delay(25);
    giro.write(100);
    analogWrite(en, 110);

  }
  if (frente < 65 && izquierda > derecha && izquierda > 90) {
    /*if ((ti2 - ti1) > 1000) {
      giros = giros + 1;
      }*/
    giros = giros + 1;
    Serial.println("Segundo if");
    gi();
    while (frente < 66) {
      frente = ping(t1, e1);
      delay(25);
      
      Serial.print("Frente:");
      Serial.println(frente);
      Serial.print("Derecha:");
      Serial.println(derecha);
      Serial.print("Izquierda:");
      Serial.println(izquierda);
      delay(100);
    }
    delay(1500);
    analogWrite(en, vel);

    izquierda = ping(t2, e2);
    delay(25);
    giro.write(recto);
  }


  if (izquierda > derecha) {
    giro.write(60);
    delay(110);
  }
  if (derecha > izquierda) {
    giro.write(130);
    delay(100);
  }
}
