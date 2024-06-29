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
unsigned long td1, td2, ti1, ti2;
Servo giro;
int tiempo, frente, derecha, izquierda;

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

void loop() {
  // Verificar si han pasado 43 segundos
  if (giros >= 12) {
    delay(1000);
    parar(); // Detener el carro
    delay(10000);
    return; // Salir del loop para evitar seguir ejecutando
  }

  giro.write(90);
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

  if (frente < 60 && derecha > 100) {
    /* if ((td2 - td1) > 1000 ) {
       giros = giros + 1;
      }*/
    giros = giros + 1;
    Serial.println("Primer if");
    gd();
    delay(1000);
    analogWrite(en, 255);
    derecha = ping(t2, e2);
    delay(25);
    giro.write(90);

    if (derecha > 100) {
      delay(400);
    }
  }
  if (frente < 60 && izquierda > 100) {
    /*if ((ti2 - ti1) > 1000) {
      giros = giros + 1;
      }*/
    giros = giros + 1;
    Serial.println("Segundo if");
    gi();
    delay(800);
    analogWrite(en, 255);

    izquierda = ping(t2, e2);
    delay(25);
    giro.write(90);

    if (izquierda > 100) {
      delay(400);
    }
  }

  if (izquierda < 20) {
    Serial.println("3er if");
    gd();
    delay(150);
  }
  if (derecha < 20) {
    Serial.println("4to if");
    gi();
    delay(300);
  }

}

void arrancar() {
  analogWrite(en, 255);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
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

void parar() {
  analogWrite(en, 0); // Detener el motor
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  giro.write(90); // Asegurarse de que el servo esté en posición neutral
  Serial.println("Carro detenido");
}

void retro() {
  analogWrite(en, 200);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
}

void gi() {
  giro.write(45);
}

void gd() {
  giro.write(135);
}
