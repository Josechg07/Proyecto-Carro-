# SONICAR
# Logbook

This repository contains information about the sonicar team's robot for the 2025 World Robot Olympiad (WRO) Future Engineers competition. The design of the robot was taked from thingiverse, but was adapted to the necesities of the team.

# Team

### José Ricardo Chacón



### Andrés José Casenave



### Juán Andrés Perez
Hey, I'm Juan Pérez from Venezuela! This is my first time joining the WRO on the Future Engineers category and I am having a blast! I had never tried it before, but after starting, creating this robot has been an amazing experience. I love challenging myself! From crosswords to chess, you name it, and this whole experience feels like an even bigger challenge I'm ready to beat!


# Photo Team


![Photo Team](https://github.com/Josechg07/Proyecto-Carro-/blob/79d9914715bfaa9ab9f91b5d2c46b010a129eff2/t-photos/Foto%20equipo.jpg)


# Challenge
The WRO 2025 Future Engineers - Self-Driving Cars challenge makes to the teams to create, 




# Photos of the robot eustakio


| ![Front](https://github.com/Josechg07/Proyecto-Carro-/blob/12b60deac7c74e78cd3b6142d8d33f51107b93d8/v-photos/Lado%20Frontal.jpg) | ![Back](https://github.com/Josechg07/Proyecto-Carro-/blob/12b60deac7c74e78cd3b6142d8d33f51107b93d8/v-photos/Lado%20trasero.jpg) |
|:--:|:--:|
| Front | Back |

| ![Left](https://github.com/Josechg07/Proyecto-Carro-/blob/12b60deac7c74e78cd3b6142d8d33f51107b93d8/v-photos/Lado%20izquierdo.jpg) | ![Right](https://github.com/Josechg07/Proyecto-Carro-/blob/12b60deac7c74e78cd3b6142d8d33f51107b93d8/v-photos/Lado%20derecho.jpg) |
|:--:|:--:|
| Left | Right |

| ![Top](https://github.com/Josechg07/Proyecto-Carro-/blob/5a31ce0698bf67a05613ec5fa373fd08630c7c21/v-photos/Lado%20Superior.jpg) | ![Botton](https://github.com/Josechg07/Proyecto-Carro-/blob/2da9dcb64fe6ef0a51f599abdc4eae7ae211af33/v-photos/Lado%20Inferior.jpg) |
|:--:|:--:|
| Top | Botton |




# Video of our robot on (*Youtube*)








# Mechanic Management





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



# Movility Management


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


### DC Motor

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


### Servo Motor



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


# Obstacle Management

### Open Round


### Final Round


### Cube Detection


### Parking Wall Detection


### Robot Construction Guide


### Cost List







# Installation :books:
### System Requirements
* [Beak](https://beakit.com/)
<img src="https://t.bkit.co/w_66a28fc18c347.gif" />
