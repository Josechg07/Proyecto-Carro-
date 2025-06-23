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





## Motor


## Motor Driver


## Steering


## Servo Motor


## Chasis



# Movility Management


## Li-Po Battery


## Arduino Uno R4 WIFI


## Camera HuskyLens


## Protoboard




# Code for each one of the component


## DC Motor


## Servo Motor


## Camera HuskyLens



# Obstacle Management

## Open Round


## Final Round


## Cube Detection


## Parking Wall Detection


## Robot Construction Guide


## Cost List




We, Andrés Casenave, José Chacón, and Juán Perez, are 5th and 4th year students at Colegio Simón Bolívar II. Upon learning about this competition, we formed a work team with the dream of learning about this challenge, meeting new people, working together to achieve a goal, and representing the school. However, our knowledge was limited, and it represented a great challenge for us to acquire all the skills required by this competition, which is why we asked our coaches for help in acquiring knowledge in design, robotics, mechanics, electronics, and programming. These have been arduous months of work and study to solve each of the challenges involved in building an autonomous car.


At the beginning of the project, since we already had knowledge from our previous competition, it was easier for us to write the robot's code. Still, we encountered several issues because after some time without making changes or reinforcing our knowledge, we had to relearn the code. The positive part is that having prior knowledge made it easier to understand the code and how the robot worked, which also made it easier to make future adjustments the robot would need.


During the first months, we focused on understanding our old code and designing a new version of the car using AutoCAD as the main tool. Later, we started using Blender because it is more versatile for creating shapes. Once the design was complete, we proceeded to 3D print it with the school’s printer. Then we began assembling the pieces and testing them to ensure proper fit and coordination with the rest of the components the car required. As the months went by, the car progressed and underwent several changes, including the distribution of the various components. We finally got it to work and began programming it using an Arduino Mega as the brain of the robot.


Our first setbacks came when testing the robot again, as it presented new problems. For example, the batteries we were using began to swell, which worried us a lot and forced us to look for other battery options to avoid any issues. After buying the new batteries, we realized we were missing a connector to make contact with the L298N, so we ended up making more purchases than planned, which delayed the robot-building process.


We then began testing new components that could provide more accurate sensor measurements to improve the robot's performance. However, while implementing these components, some helped a lot, but others caused more problems than we already had.


Given all the problems we were facing with the car, we decided to build a new one. We based it on an existing design published on Thingiverse and made structural changes to adapt it to our car’s needs. This helped us achieve a personalized robot, better suited for the competition, and with a solid design base that ensured better component distribution. This caused a slight delay since it was almost like starting from scratch, but it allowed us to have a better structure.


Having to adapt to a new structure was a bit challenging when integrating the steering system, as the dimensions were different. Once the components were connected, new problems began—mostly related to the wiring—forcing us to find solutions to keep cables properly attached to each other and the components. While solving these issues, more appeared, such as communication problems between components and the board, code errors, among others; but we still managed to resolve each one as it came up.


Our first competition is coming up soon, and we are nervous because the robot shows unexpected errors. But thanks to our whole team and our coaches, we are able to learn from our mistakes to improve for the next competitions and overcome the challenges that lie ahead.



Project Description
SONICAR is a robotics project developed by high school students from Colegio Simón Bolívar II. The project consists of an autonomous vehicle capable of navigating and avoiding obstacles using an Arduino Mega. The vehicle employs ultrasonic sensors to detect objects in its environment, a DC motor for propulsion, a servo motor for steering, and an L298 motor driver module to manage the DC motor. This project provides an excellent learning opportunity in the fields of robotics and programming, integrating various components and technologies to achieve its functionality.





## Components Used

### Bill of Materials (BOM)


### 1. Structure:

1.1 6x main columns 4cm x 0.4cm x 0.4cm
1.2 Chassis
1.3 Wire
1.4 Hot glue
1.5 Connection bars x 2
1.6 Screws x 19
1.7 Wheel connectors x 2
1.8 Motor base


### 2. Electrical Components:

2.1 Arduino Mega
2.2 L298N
2.3 Ultrasonic sensor (HC-SR04)
2.4 Laser sensors (VL53L0X-V2) x2
2.5 Various male-male, female-female, and male-female jumper wires
2.6 5600mAh lithium battery
2.7 Sen breadboard
2.8 Huskylens camera

### 3. Mechanical Components:

3.1 Wheels x 4
3.2 11V direct current (DC) motor
3.3 Servo motor (SG90)



### Arduino Mega

The Arduino Mega is a low-cost development board that allows users to create programming and electronics projects. It features an 8-bit microcontroller, limited memory but sufficient for many projects, and multiple ports to connect other components. In this project, the Arduino Mega acts as the brain of the vehicle, making decisions based on sensor input and controlling the motors. Its simplicity and versatility make the Arduino Mega an ideal platform for educational and prototyping projects.


### Laser Sensors (VL53L0X-V2)

Two VL53L0X-V2 laser sensors are used for distance measurement. These sensors detect object distances within a range by emitting a light beam and measuring the time it takes to return. This allows for object detection and autonomous movement. These sensors are commonly used in projects like this due to their precision and fewer problems compared to other types. In this work, they are crucial to achieving vehicle autonomy.


### 5600mAh Lithium Battery

A lithium battery was used to power the components, providing the current they need to operate. This battery has a large charge capacity and considerable voltage, which helps reduce the need for frequent recharges and increases work efficiency.


### Ultrasonic Sensor (HC-SR04)

The HC-SR04 ultrasonic sensor is used for obstacle detection. It measures the distance to nearby objects by emitting an ultrasonic pulse and measuring the time it takes to bounce back. The distance is calculated based on the time the sound travels to the object and back. These sensors are widely used in robotics due to their precision and low cost and are fundamental to this project’s navigation capabilities.


### Motor Driver Module (L298N)

The L298 motor driver controls the speed and direction of a DC motor. It receives signals from the Arduino and translates them into commands that the motor can understand, allowing for precise propulsion control. The L298N is a dual H-Bridge driver capable of handling two DC motors, but this project only uses one. Its ability to handle high voltages and currents makes it ideal for small-scale robotic and car projects.


### DC Motor

A direct current (DC) motor runs on DC power. In this project, it propels the vehicle. The motor’s speed and direction are controlled via the L298 module, allowing the car to move forward or backward as needed. DC motors are known for their simplicity and efficiency, making them a popular choice in robotics.


### Servo Motor

A servo motor is used to control the vehicle’s direction. Servos are precision motors that rotate to specific angles, ideal for tasks requiring accurate movements. In this project, the servo is used to steer the front wheels, allowing the vehicle to change direction when obstacles are detected. Servo motors are essential in robotics for their precise control.


### Cables and Connectors

Various cables and connectors are used to link all project components. Using quality cables and ensuring firm connections helps avoid communication or power issues. Proper cabling ensures all components work correctly and communicate effectively—critical for vehicle performance.



### Team Members

The team responsible for this project consists of high school students from Colegio Simón Bolívar II who worked together to combine their programming and electronics skills:

•	José Chacón: José was responsible for software and hardware integration, developing parts of the code, adapting the chassis design to suit our needs, ensuring proper signal transmission, and confirming that the system responded appropriately to sensor data. He also improved the vehicle’s design to meet weight and spacing regulations and ensure component functionality.

•	Andrés Cazenave: Andrés focused on the hardware, ensuring all components were correctly connected and functional. His responsibilities included circuit assembly, sensor, motor and motor controller integration, and hardware troubleshooting. He also optimized the design to ensure a solid, efficient build.

•	Juán Perez: Juán worked on software development, creating the code that allows the vehicle to make decisions based on sensor input and control the motors. He programmed in C++ to manage Arduino pin interactions and coordinated the vehicle’s actions. Juán also contributed to the vehicle design for better component usage.




## Description of the Modules and Their Relationship with the Electromechanical Components

### Code Modules

1.	Sensor Module: Manages interaction with the ultrasonic and laser sensors. Sends trigger pulses and reads echo pulses to calculate distances.


2.	Motor Control Module: Interfaces with the L298 driver to translate high-level commands (forward, reverse, stop) into speed/direction control.


3.	Servo Control Module: Translates directional commands into servo angles for steering.


4.	Main Control Module: Integrates sensor data and controls motor/servo logic. It is the central brain that makes navigation decisions.




### Relationship with Electromechanical Components

• 	Ultrasonic Sensors (HC-SR04): Connected to Arduino Mega pins. Sends and reads signals to calculate distances.


• 	DC Motor and L298N Controller: The motor control module sends signals from Arduino to L298N, which controls voltage/current to the motor.


• 	Servo Motor: Receives PWM signals from Arduino to adjust steering position.




### Building/Compiling/Uploading Code

1. 	Assemble Hardware:


o	Connect HC-SR04 sensors to Arduino pins
o	Connect L298N to DC motor and Arduino
o	Connect servo to Arduino for PWM control
o	Ensure all components are securely connected and powered



2. 	Prepare Arduino Mega:


o	Install Arduino IDE
o	Connect Arduino Mega via USB
o	Upload control code from the IDE



3. 	Clone Repository:

o	Clone the SONICAR GitHub repository



4. 	Run Code:

o	Ensure all scripts/modules are ready
o	Load code into Arduino Mega using the IDE




### Compilation and Upload

• 	Arduino scripts do not need external compilation outside the Arduino IDE
•	Directly upload the code to the Arduino Mega



# Installation :books:
### System Requirements
* [Beak](https://beakit.com/)
<img src="https://t.bkit.co/w_66a28fc18c347.gif" />
