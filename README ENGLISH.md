
# SONICAR
## Logbook

We, Andrés Casenave and José Chacón, are fourth-year students at Colegio Simón Bolívar II. Upon learning about this competition, we formed a team with the dream of learning about the contest, meeting new people, working together to achieve a goal, and representing our school. However, our knowledge was limited and it posed a great challenge for us to acquire all the skills that this competition demanded, so we sought help from our coach. to gain knowledge in design, robotics, mechanics, electronics, and programation. It has been months of hard work  and a lot of studying for us to be able to overcome the challenges that building an autonomous car.

At the beginning of the project, our first setback was not finding a third teammate who wanted to commit to this learning adventure, so we ended up deciding to take on this challenge with one less member. While we initially saw this as an obstacle, we later realized the opportunity it represented by always involving the two of us in each stage of the process.

The first few months we focused on designing the car using AutoCAD as our main tool; once the design was finalized, we proceeded to 3D print it using the school's printer. Then we moved on to assemble the pieces and test them for proper assembly and coordination with the rest of the components that the car needed to have. Months passed and the car was progressing, undergoing several changes during the process including the distribution of the different components. Finally, we got it to work and then we started programming it, using the Raspberry Pi 4 as the brain of the robot.

Our first competition was approaching and we felt prepared since the robot was functioning and met the initial competition requirements of completing 3 laps on our track. The day of the competition arrived and when positioning the robot on the track at the IEA, the car did not move. We felt frustrated, but we overcame this obstacle by finding that a cable was preventing it from functioning, as well as the lack of internet connection which was not allowed, and until that moment we were not aware of it.

After this first experience, we decided to completely redesign the car, based on the T-Lab channel for its design. We decided to print it again, but when placing the parts from the old car onto the new one, we were limited in the space we had, so we decided to create a second floor, removing parts that were not necessary on which the lighter components of the car would go, thus overcoming this problem.

To avoid the inconvenience we had with the Raspberry Pi, we decided to switch it for an Arduino UNO, which facilitated programming because its programming language was simpler. Likewise, when changing the design of the car, it was also necessary to change the size of the wheels so that the car would not rub on the floor.

The day of our second competition, now in Maracay, arrived and when putting the car on the track, it performed well and the jury gladly awarded us a good score and first place in our category. However, we also encountered an inconvenience which was that our main camera overheated and ended up burning along with the Arduino UNO. The next day, with the help of our coach, we validated the components of the camera that burned causing the Arduino to burn along with it. Luckily, we had a backup Arduino Mega, that, came with more pins for our disposal. After installing all of the components in the new desing, it worked successfully just as it did before and thanks to this second floor, we managed to accomplish a better cable management. We were ready for our third competition. 

In our third competing experience, the car did not perform as expected, it crashed. After analyzing the possible reasons, we realized that the track did not have the measures we had established for the competition and with which we had practiced. Added to this, we lost one of the cameras before the tournament. We then had to develop a completely new code on the spot for this occasion, counting with much less time than we were used to.

Lastly, we have a new design under test, which allows us to put more components on the car due to the wide space it has compared to the previous prototype. We decided to change the car since with the implementation of the Raspberry Pi 4 for the operation of the camera, we required a large space to have the Arduino Mega and Raspberry functioning at the same time and have the desired performance.

Today, SONICAR continues to be in modifications as it is a prototype that has been evolving and gaining more autonomy. We are learning and preparing for the new challenges set by the competition, not only in setting up sensors for color recognition and making autonomous decisions on how to overcome obstacles, but in all the strategies we must consider at the time of programming and making decisions for the autonomous operation of the same. Without a doubt, this has been a wonderful experience of creation, trial, observation and learning through our participation.

### Project Description
SONICAR is a robotics project developed by high school students from Colegio Simón Bolívar II. The project involves an autonomous vehicle capable of navigating and avoiding obstacles using an Arduino Mega. The vehicle employs ultrasound sensors to detect objects in its surroundings, a DC motor for propulsion, a servo motor for steering, and an L298 motor controller module to manage the DC motor. This project provides an excellent learning opportunity in the field of robotics and programming, integrating diverse components y technologies to accomplish its functionality.


## Components Used

### List of Materials (BOM)

1. ### Structure:

1.1 4x main columns 7mm x 7mm x 6cm

1.2 Chassis

1.3 Wire

1.4 Through holes x 2

1.5 Rings x 2

1.6 Extensions x 2

1.7 Caps x2

1.8 Cap bases x2

1.9 Plank

1.10 Servomotor base

### 2. Electrical Components:

2.1 Arduino Mega

2.2 Raspberry Pi 4

2.3 L298N

2.4 Ultrasound sensors (Hc-sr04) x3

2.5 Various male-male, female-female, and male-female cables

2.6 Lithium battery base

2.7 Protoboard

2.8 Raspberry Pi OV5647

### 3. Mechanical Components:

3.1 Wheels x 4

3.2 TT DC Motor 3-6V

3.3 Servomotor (SG90)


### Arduino Mega

The Arduino Mega is a low-cost development board that allows for programming and electronics projects. It features an 8-bit microcontroller, limited but sufficient memory capacity for many projects, and multiple ports for connecting to other components. In this project, the Arduino Mega acts as the brain of the vehicle, making decisions based on information provided by the sensors and controlling the motors. The simplicity and versatility of the Arduino Mega make it an ideal platform for educational and prototyping.

### Raspberry Pi 4

The Raspberry Pi 4 is a low-cost, high-performance computer, designed for middleware projects. Equipped with a 64-bit ARM Cortex-A72 processor, it offers increased memory capacity and performance compared to previous versions. Additionally, it has multiple USB ports, GPIO, and support for dual 4K displays, allowing it to connect to a wide variety of components and peripherals. In this project, the Raspberry Pi 4 acts as the advanced processing center, handling complex tasks and running algorithms that require a significant computing power. The power and versatility of the Raspberry Pi 4 transform it in a plataform ideal for advanced protopyping proyects, educational proyects, and technological development. 
### Raspberry Pi OV5647

The Raspberry Pi OV5647 camera is a high-quality camera model, which has a resolution of 5 megapixels, capable of capturing sharp and clear images. Its compact size has made it ideal for our project, in addition to its ease of use, versatility, and low cost.

### Ultrasound Sensors (HC-SR04)

Three HC-SR04 ultrasound sensors are used for obstacle detection. These sensors measure the distance to nearby objects by emitting an ultrasound sound pulse and measuring the time it takes to reflect back. The distance is calculated based on the time it takes for the sound to travel to the object and return to the sensor, allowing the vehicle to detect obstacles and navigate autonomously. Ultrasound sensors are widely used in robotics due to their accuracy and low cost, and in this project, they are fundamental for the navigational capacity of the vehicle.

### Motor Controller Module (L298N)

The L298 motor controller allows controlling the speed and direction of a DC motor. This module receives signals from the Arduino and translates them into commands that the motor can understand, allowing precise control of the vehicle's propulsion. The L298N is a dual H-Bridge motor controller that can handle two DC motors, but in this project, only one is used. Its ability to handle high voltages and currents makes it ideal for robotics and small-scale automotive projects.

### DC Motor

A direct current (DC) motor is an electric motor that operates on direct current. In this project, the DC motor is used to propel the vehicle. The speed and direction of the motor are controlled through the L298 module, allowing the vehicle to move forward or backward as needed. DC motors are known for their simplicity and efficiency and are a popular choice for robotics projects due to their easy control and reliable performance.

### Servo Motor

A servo motor is used to control the direction of the vehicle. Servos are precision motors that can rotate to specific positions, which is useful for applications requiring precise movements. In this case, the servo motor is used to turn the front wheels of the vehicle, allowing it to change direction when obstacles are detected. Servo motors are essential in robotics for their precise control capability, which allows for exact steering and efficient navigation.

### Cables and Connectors

Various cables and connectors are used to interconnect all the components of the project. It is important to use good quality cables and ensure firm connections to avoid communication and power supply issues. The right cables and connectors ensure that all components function properly and communicate effectively, which is crucial for the performance of the vehicle.
