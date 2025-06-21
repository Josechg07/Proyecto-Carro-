#include <NewPing.h> // Libreria del sensor de ultrasonido
#include <Adafruit_VL53L0X.h> // Libreria del sensor laser
#include <Servo.h> // Libreria del servo motor
#define LOX1_ADDRESS 0x30 // Donde se guarda en la memoria la distancia del sensor derecho
#define LOX2_ADDRESS 0x31 // Donde se guarda en la memoria la distancia del sensor izquierdo
#define SHT_LOX1 6 // Pin shutdown del sensor laser derecho
#define SHT_LOX2 7 // Pin shutdown del sensor laser izquierdo
#define sonar_num 1 // cantidad de sensores usados por la libreria NewPing
#define dist 400 // distancia maxima aceptada por NewPing
Adafruit_VL53L0X lox1 = Adafruit_VL53L0X(); // Variable para el sensor laser derecho
Adafruit_VL53L0X lox2 = Adafruit_VL53L0X(); // Variable para el sensor laser izquierda
VL53L0X_RangingMeasurementData_t measure1; // Variable de Adafruit para el sensor laser derecho
VL53L0X_RangingMeasurementData_t measure2; // Variable de Adafruit para el sensor laser izquierdo
int frente = 0; // Variable para la distancia del frente
int antf; // Variable usada si el sensor del frente falla
int derecha; // Variable para la distancia derecha
int izquierda; // Variable para la distancia izquierda
int ef = 2; // Echo del frente
int tf = 5; // Trigger del frente
int in1 = 8; // Conexion para que avanze el motor
int in2 = 9; // Conexion para que retroceda el motor
int en = 10; // Conexion que define la velocidad del motor
int ser = 11; // Variable para el pin del servo motor
int vel = 130; // Variable para definir la velocidad del carro
int recto = 100; // Variable para definir a que angulo deben estar las ruedas para avanzar recto
int giros = 0; // Contador de los giros que ha dado el carro
int rosamelano; // Variable que cuenta el tiempo desde el ultimo giro
int boton = 3; // Conexion del pin para el boton
Servo giro; // Valor usado para el servo motor
NewPing sonar[sonar_num] = { // Codigo para activar el sensor ultrasonido
  NewPing(tf, ef, dist),
};
void setID() { // Codigo para iniciar los sensores laser
  // Se apagan todos los sensores
  digitalWrite(SHT_LOX1, LOW);
  digitalWrite(SHT_LOX2, LOW);
  delay(10);
  // Se prenden para activarlos
  digitalWrite(SHT_LOX1, HIGH);
  digitalWrite(SHT_LOX2, HIGH);
  delay(10);
  // Se apaga el segundo sensor para iniciar el primero
  digitalWrite(SHT_LOX1, HIGH);
  digitalWrite(SHT_LOX2, LOW);
  delay(10);
  // Iniciando sensor laser 1
  lox1.begin(LOX1_ADDRESS);
  delay(10);
  // Mandar error si el sensor no se prende y volver a intentar
  while (!lox1.begin(LOX1_ADDRESS)) {
    Serial.println("Failed to boot first VL53L0X");
    lox1.begin(LOX1_ADDRESS);
    delay(20);
  }
  delay(10);
  // Prender el segundo sensor para iniciarlo
  digitalWrite(SHT_LOX2, HIGH);
  delay(10);
  // Iniciar el sensor laser 2
  lox2.begin(LOX2_ADDRESS);
  delay(10);
  // Mandar error si el sensor no prende y volver a intentar
  if (!lox2.begin(LOX2_ADDRESS)) {
    Serial.println("Failed to boot second VL53L0X");
    lox2.begin(LOX2_ADDRESS);
    delay(20);
  }
}

void setup() {
  Serial.begin(115200); // Iniciar monitor serial
  pinMode(SHT_LOX1, OUTPUT); //Modo del pin del sensor laser derecho
  pinMode(SHT_LOX2, OUTPUT); // Modo del pin del sensor laser izquierdo
  pinMode(ef, INPUT); // Modo del Echo Pin para el frente
  pinMode(tf, OUTPUT); // Modo del Trigger Pin para el frente
  pinMode(en, OUTPUT); // Modo del pin para la velocidad del carro
  pinMode(in1, OUTPUT); // Modo del pin para que avance el carro
  pinMode(in2, OUTPUT); // Modo del pin para que retroceda el carro
  pinMode(boton,INPUT); // Modo del pin para el boton
  giro.attach(ser); // Definir el pin del servo motor
  digitalWrite(SHT_LOX1, LOW); // Apagar el sensor laser derecho
  digitalWrite(SHT_LOX2, LOW); // Apagar el sensor laser izquierdo
  while(digitalRead(boton) == 0){ // No iniciar el codigo hasta que se presione el boton
    Serial.println(digitalRead(boton));
    delay(10);
  }
  Serial.println("Starting...");
  setID(); // Iniciar los sensores laser
  Serial.println("Started!");
}
void sf() { // Void para el sensor del frente
  antf = frente; // Guardar el ultimo valor que tuvo frente
  frente = sonar[0].ping_cm(); // Guardar el valor actual

  if (frente == 0) { // En caso de que el frente de un error
    frente = antf; // Igualar frente a su ultimo valor
  }
  Serial.print("F: ");
  Serial.print(frente);// Imprimir el valor del frente
  Serial.println(" ");
  delay(15);
}

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
void gd() { // Void para que el carro gire a la derecha
  digitalWrite(LED_BUILTIN, HIGH); // Prender el led del Arduino para mostrar el giro
  //analogWrite(en, vel); // Aumentar la velocidad del carro
  digitalWrite(in1, HIGH); // Asegurarse que el carro avanza
  digitalWrite(in2, LOW);
  giro.write(120); // Rotar las ruedas para que gire a la derecha
  while (frente < 110 && derecha > 50) { // Parar el giro cuando se cumplan ciertas distancias
    sf(); // Continuar leyendo los valores
    sd();
    delay(20);
  }
  crotolamo(); // Reiniciar el carro
  digitalWrite(LED_BUILTIN, LOW); // Indicar que acabo el giro
  rosamelano = millis(); // Guardar el tiempo en el que termina el giro
}
void gi() { // Void para que el carro gire a la izquierda
  digitalWrite(LED_BUILTIN, HIGH); // Prender el led del Arduino para mostrar el giro
  analogWrite(en, vel + 65); // Aumentar la velocidad del carro
  digitalWrite(in1, HIGH); // Asegurarse que el carro avanza
  digitalWrite(in2, LOW);
  giro.write(80); // Rotar las ruedas para que gire a la izquierda
  while(frente < 110 && izquierda > 50){ // Parar el giro cuando se cumplan ciertas distancias
    sf(); // Continuar leyendo los valores
    si();
    delay(100); 
  }
  crotolamo(); // Reiniciar el carro
  digitalWrite(LED_BUILTIN, LOW); // Indicar que acabo el giro
  rosamelano = millis(); // Guardar el tiempo en el que termina el giro
} 
void sdi() { // Void para leer los valores de los lados
  lox1.rangingTest(&measure1, false);  // Leer la distancia derecha
  lox2.rangingTest(&measure2, false);  // Leer la distancia izquierda
  derecha = int(measure1.RangeMilliMeter / 10); // Guardar las distancias de ambos lados en cm
  izquierda = int(measure2.RangeMilliMeter / 10);
  // Imprimir Valor de la derecha
  Serial.print("D: ");
  if (measure1.RangeStatus != 4) {  // En caso de que el sensor no este fuera de rango
    Serial.print(measure1.RangeMilliMeter / 10);
  } else { // Si el sensor esta fuera de rango
    Serial.print("Out of range");
  }
  // Imprimir la distancia izquierda
  Serial.print(" ");
  Serial.print("I: ");
  if (measure2.RangeStatus != 4) { // En caso de que el sensor no este fuera de rango
    Serial.print(measure2.RangeMilliMeter / 10);
  } else { // Si el sensor esta fuera de rango
    Serial.print("Out of range");
  }
  Serial.print(" ");
}
void sd(){ // Void para leer los valores de la derecha
  lox1.rangingTest(&measure1, false);// Leer la distancia derecha
  derecha = int(measure1.RangeMilliMeter / 10);// Guardar las distancias de la derecha en cm
    Serial.print("D: "); // Imprimir Valor de la derecha
  if (measure1.RangeStatus != 4) {// En caso de que el sensor no este fuera de rango
    Serial.print(measure1.RangeMilliMeter / 10);
  } else {// Si el sensor esta fuera de rango
    Serial.print("Out of range");
  }
  Serial.print(" ");
}
void si(){// Void para leer los valores de la izquierda
  lox2.rangingTest(&measure2, false);// Leer la distancia izquierda
  izquierda = int(measure2.RangeMilliMeter / 10); // Guardar las distancias de la izquierda en cm
    Serial.print("I: "); // Imprimir la distancia izquierda
  if (measure2.RangeStatus != 4) {  // En caso de que el sensor no este fuera de rango
    Serial.print(measure2.RangeMilliMeter / 10);
  } else {// Si el sensor esta fuera de rango
    Serial.print("Out of range");
  }
  Serial.print(" ");
}
void loop() { // Loop para el carro
  crotolamo(); // El carro avanza
  sd();// El carro lee la distancia de todos los lados
  si();
  sf();
  if (giros == 12) { // Si el carro dio las 3 vueltas
    crotolamo(); // El carro avanza
    delay(1500); // Esperar 1.5s
    permatrago(); // Parar el carro
    Serial.println("Trayecto terminado");
    while (1) // Evitar que el codigo continue
      ;
  }
  if (frente < 80 && derecha > 100 && millis() - rosamelano > 1500) { // Empezar el giro si ciertos lados son correctos y no se ha girado en los ultimos 1.5s
    gd(); //Girar a la derecha
    Serial.println("Giro derecha");
    giros = +1; // Indicar que se realizo un giro
  }
  if (frente < 80 && izquierda > 100 && millis() - rosamelano > 1500) { // Empezar el giro si ciertos lados son correctos y no se ha girado en los ultimos 1.5s
    gi(); // Girar a la izquierda
    Serial.println("Giro izquierda");
    giros = +1; // Indicar que se realizo un giro
  }
  sd();// Volver a leer los lados
  si();
  Serial.println();
  //if (derecha < izquierda) {
    //giro.write(70);
    //delay(100);
  //}
  //if (izquierda < derecha) {
    //giro.write(130);
    //delay(100);
  //}
  if (derecha > 55){ // Si el carro esta muy lejos de la pared derecha, hacer una pequeña correccion
    giro.write(120); // Girar un poco a la derecha
    delay(100);
  }
  if (izquierda > 55){ // Si el carro esta muy lejos de la pared izquierda, hacer una pequeña correccion
    giro.write(80); // Girar un poco a la izquierda
    delay(100);
  }
}