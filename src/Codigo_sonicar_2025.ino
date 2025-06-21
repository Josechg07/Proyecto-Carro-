#include <NewPing.h>
#include <Adafruit_VL53L0X.h>
#include <Servo.h>
#define LOX1_ADDRESS 0x30
#define LOX2_ADDRESS 0x31
#define SHT_LOX1 6
#define SHT_LOX2 7
#define sonar_num 1
#define dist 400
Adafruit_VL53L0X lox1 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox2 = Adafruit_VL53L0X();
VL53L0X_RangingMeasurementData_t measure1;
VL53L0X_RangingMeasurementData_t measure2;
int frente = 0;
int antf;
int derecha;
int izquierda;
int ef = 2;
int tf = 5;
int in1 = 8;
int in2 = 9;
int en = 10;
int ser = 11;
int vel = 160;
int recto = 100;
int giros = 0;
int rosamelano;
int boton = 3;
Servo giro;
NewPing sonar[sonar_num] = {
  NewPing(tf, ef, dist),
};
void setID() {
  // all reset
  digitalWrite(SHT_LOX1, LOW);
  digitalWrite(SHT_LOX2, LOW);
  delay(10);
  // all unreset
  digitalWrite(SHT_LOX1, HIGH);
  digitalWrite(SHT_LOX2, HIGH);
  delay(10);
  // activating LOX1 and resetting LOX2
  digitalWrite(SHT_LOX1, HIGH);
  digitalWrite(SHT_LOX2, LOW);
  delay(10);
  lox1.begin(LOX1_ADDRESS);
  delay(10);
  while (!lox1.begin(LOX1_ADDRESS)) {
    Serial.println(F("Failed to boot first VL53L0X"));
    lox1.begin(LOX1_ADDRESS);
  }
  delay(10);
  digitalWrite(SHT_LOX2, HIGH);
  delay(10);
  lox2.begin(LOX2_ADDRESS);
  delay(10);
  if (!lox2.begin(LOX2_ADDRESS)) {
    Serial.println(F("Failed to boot second VL53L0X"));
    while (1)
      ;
  }
}

void setup() {
  Serial.begin(115200);

  pinMode(SHT_LOX1, OUTPUT);
  pinMode(SHT_LOX2, OUTPUT);
  pinMode(ef, INPUT);
  pinMode(tf, OUTPUT);
  pinMode(en, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(boton,INPUT);
  giro.attach(ser);
  digitalWrite(SHT_LOX1, LOW);
  digitalWrite(SHT_LOX2, LOW);
  Serial.println("Presiona el fokin boton.");
  while(digitalRead(boton) == 0){
    Serial.println(digitalRead(boton));
  }
  Serial.println("Starting...");
  Serial.println("nig");
  setID();
  Serial.println("ger");
  Serial.println("Started!");
}
void sf() {
  antf = frente;
  frente = sonar[0].ping_cm();

  if (frente == 0) {
    frente = antf;
  }
  Serial.print("F: ");
  Serial.print(frente);
  Serial.println(" ");
  delay(15);
}

void crotolamo() {
  giro.write(recto);
  analogWrite(en, vel);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
}
void retroceder() {
  giro.write(recto); 
  analogWrite(en, vel);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
}
void permatrago() {
  giro.write(recto);
  analogWrite(en, 0);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}
void gd() {
  digitalWrite(LED_BUILTIN, HIGH);
  analogWrite(en, vel + 70);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  giro.write(70);
  while (frente < 100 && derecha > 60) {
    sd();
    sf();
    delay(20);
  }
  giro.write(100);
  analogWrite(en, vel);
  digitalWrite(LED_BUILTIN, LOW);
}
void gi() {
  digitalWrite(LED_BUILTIN, HIGH);
  analogWrite(en, vel + 65);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  giro.write(130);
  while(frente < 110 && izquierda > 50){
    sf();
    si();
    delay(100); 
  }

  crotolamo();
  digitalWrite(LED_BUILTIN, LOW);
  rosamelano = millis();
} 
void sdi() {
  lox1.rangingTest(&measure1, false);  // pass in 'true' to get debug data printout!
  lox2.rangingTest(&measure2, false);  // pass in 'true' to get debug data printout!
  derecha = int(measure1.RangeMilliMeter / 10);
  izquierda = int(measure2.RangeMilliMeter / 10);
  // print sensor one reading
  Serial.print("D: ");
  if (measure1.RangeStatus != 4) {  // if not out of range
    Serial.print(measure1.RangeMilliMeter / 10);
  } else {
    Serial.print("Out of range");
  }
  Serial.print(" ");
  Serial.print(F("I: "));
  if (measure2.RangeStatus != 4) {
    Serial.print(measure2.RangeMilliMeter / 10);
  } else {
    Serial.print("Out of range");
  }
  Serial.print(" ");
}
void sd(){
  lox1.rangingTest(&measure1, false);
  derecha = int(measure1.RangeMilliMeter / 10);
    Serial.print("D: ");
  if (measure1.RangeStatus != 4) {  // if not out of range
    Serial.print(measure1.RangeMilliMeter / 10);
  } else {
    Serial.print("Out of range");
  }
  Serial.print(" ");
}
void si(){
  lox2.rangingTest(&measure2, false);
  izquierda = int(measure2.RangeMilliMeter / 10);
    Serial.print("I: ");
  if (measure2.RangeStatus != 4) {  // if not out of range
    Serial.print(measure2.RangeMilliMeter / 10);
  } else {
    Serial.print("Out of range");
  }
  Serial.print(" ");
}
void loop() {
  crotolamo();
  sd();
  si();
  sf();
  if (giros == 12) {
    crotolamo();
    delay(1500);
    permatrago();
    Serial.println("Trayecto terminado");
    while (1)
      ;
  }
  if (frente < 80 && derecha > 80) {
    gd();
    Serial.println("Giro derecha");
    giros = +1;
  }
  if (frente < 80 && izquierda > 100 && millis() - rosamelano > 1500) {
    gi();
    Serial.println("Giro izquierda");
    giros = +1;
  }
  sd();
  si();
  Serial.println();
  //if (derecha < izquierda) {
    //giro.write(130);
    //delay(100);
  //}
  //if (izquierda < derecha) {
    //giro.write(70);
    //delay(100);
  //}
  if (derecha > 35){
    giro.write(70);
    delay(100);
  }
  if (izquierda > 35){
    giro.write(130); 
    delay(100);
  }
}