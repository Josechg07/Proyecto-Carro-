// Importar la libreria Servo para la activación de sus pines y su debido funcionamiento
// Importar la libreria de NewPing para medir la distancia con los sensores de ultra sonido
#include <Servo.h>
#include <NewPing.h>
// Configuración de las variables con números enteros
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
int primer = 0;
int sentido = 0;
Servo giro;
int tiempo, frente, derecha, izquierda;
int recto = 105;
int max = 350;

// COnfiguración para los sensores de ultra sonido 
NewPing sonar1(t1, e1, max);
NewPing sonar2(t2, e2, max);
NewPing sonar3(t3, e3, max);

//  Estableciendo los pines y su función, definiendo si es entrada como INPUT y salida como OUTPUT
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
}

// Configuración para que todas las funciones dentro de este se repitan e igualmente se encuentran las mediciones del los sensores de ultra sonido
void loop() {

  // Verificar si han pasado 43 segundos
  if (giros >= 12) {
    delay(950);
    parar();  // Detener el carro
    delay(10000);
    return;  // Salir del loop para evitar seguir ejecutando
  }

  giro.write(101);
  arrancar();
  frente = sonar1.ping_cm();
  derecha = sonar2.ping_cm();
  izquierda = sonar3.ping_cm();
  Serial.print("Frente:");
  Serial.println(frente);
  Serial.print("Derecha:");
  Serial.println(derecha);
  Serial.print("Izquierda:");
  Serial.println(izquierda);
  delay(20);
  corregir();

  if (frente < 80 && derecha > 80) { // Se encarga de los giros hacia la derecha utilizando los sensores ubicados en el frente y a la derecha

    /* if ((td2 - td1) > 1000 ) {
       giros = giros + 1;
      }*/
    giros = giros + 1;
    if (giros == 1) { // Se encarga de contar los giros que realiza el carro
      sentido = 1;
      Serial.println("Sentido derecha");
    }
    if (sentido == 1) { // Se encarga del sentido donde esta yendo el carro
      Serial.println("Primer if");
      gd();
      delay(1000);
      analogWrite(en, 255);
      derecha = sonar2.ping_cm();
      giro.write(recto); // Establece el ángulo del servo motor
      Serial.print("Frente:");
      Serial.println(frente); // Imprime el valor de frente
      Serial.print("Derecha:");
      Serial.println(derecha); // Imprime el valor de la derecha
      Serial.print("Izquierda:");
      Serial.println(izquierda); // Imprime el valor de la izquierda

     // Se encarga de imprimir lo que está detectando
      Serial.print("Frente:");
      Serial.println(frente);
      Serial.print("Derecha:");
      Serial.println(derecha);
      Serial.print("Izquierda:");
      Serial.println(izquierda);
      corregir();
      if (izquierda < 25) { // Acomoda el carro para que se aleje de los bordes tanto externos como internos
        Serial.println("3er if");
        gd();
        delay(120);
      }
      if (derecha < 25) { // Acomoda el carro para que se aleje de los bordes tanto externos como internos
        Serial.println("4to if");
        gi();
        delay(120);
      }
    }
  }

  else if (frente < 80 && izquierda > 80) { // Se encarga del giro hacia la derecha
    /*if ((ti2 - ti1) > 1000) {
      giros = giros + 1;
      }*/
    giros = giros + 1;
    if (giros == 1) { // Define en que sentido esta girando el carro, ya sea hacia la izquierda o hacia la derecha
      sentido = 0;
      Serial.println("Sentido izquierda");
    }
    if (sentido == 0) {
      Serial.println("Segundo if");
      gi();
      delay(1000);
      analogWrite(en, 255);
      izquierda = sonar3.ping_cm();
      giro.write(90);
      Serial.print("Frente:");
      Serial.println(frente);
      Serial.print("Derecha:");
      Serial.println(derecha);
      Serial.print("Izquierda:");
      Serial.println(izquierda);
      corregir();

    }
  }
  if (derecha > 80) { // Se encarga de que el carro se mantenga a una distancia considerable con respecto a los bordes internos y externos de la pista
    derecha = sonar2.ping_cm();
    delay(100);
  }
  if (izquierda > 80) { // Se encarga de que el carro se mantenga a una distancia considerable con respecto a los bordes internos y externos de la pista
    izquierda = sonar3.ping_cm();
    delay(100);
  }
  corregir();

  if (izquierda < 30) {
    Serial.println("5to if");
    gd();
    delay(120);
  }
  if (derecha < 30) {
    Serial.println("6to if");
    gi();
    delay(120);
  }
  if (izquierda > derecha) {
    Serial.println("5to if");
    giro.write(85);
    delay(120);
  }
  else if (derecha > izquierda) {
    Serial.println("6to if");
    giro.write(120);
    delay(120);
  }
}


void arrancar() {
  analogWrite(en, 255); // Encender el motor
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
}

void parar() {
  analogWrite(en, 0);  // Detener el motor
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  giro.write(100);  // Asegurarse de que el servo esté en posición neutral
  Serial.println("Carro detenido");
}

void retro() { // Condigura el motor para que cambie los polos del motor y la potencia del mismo
  analogWrite(en, 200);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
}

void gi() { // Ingresa el ángulo de giro para la izquierda
  giro.write(55);
}

void gd() { // Ingresa el ángulo de giro para la derecha
  giro.write(143);
}

void corregir () { // Configuración para la medición de la distancia del frente
  while (frente < 8) {
    Serial.println("arreglo de medición del frente");
    Serial.print("Frente:");
    Serial.println(frente);
    frente = sonar1.ping_cm();
  }

  while (derecha == 0) { // Configuración para la medición de la distancia de la derecha
    Serial.println("arreglo de medición de la derecha");
    derecha = sonar2.ping_cm();

    Serial.print("Derecha:");
    Serial.println(derecha);
  }

  while (izquierda == 0) { // Configuración para la medición de la distancia de la izquierda
    Serial.println("arreglo de medición de la izquierda");
    izquierda = sonar3.ping_cm();
    Serial.print("Izquierda:");
    Serial.println(izquierda);
  }
}
