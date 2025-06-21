# SONICAR
# Bitácora


Nosotros, Andrés Casenave, José Chacón y Juán Perez, somos estudiantes de 5to año y 4to año del Colegio Simón Bolívar II. Al conocer de este concurso nos constituimos como un equipo de trabajo con el sueño de aprender sobre esta competencia, conocer a nuevas personas, trabajar juntos para cumplir un objetivo y representar al colegio. Sin embargo, nuestros conocimientos eran limitados y representó un gran reto para nosotros adquirir todas las destrezas que exigía este concurso, por lo que solicitamos ayuda a nuestros entrenadores para adquirir conocimientos tanto de diseño, robótica, mecánica, electrónica y programación. Han sido unos arduos meses de trabajo y estudio para resolver cada uno de los retos que impone tener un carro autónomo.


Al inicio del proyecto, al ya tener conocimiento por nuestra competencia se nos fue más sencillo el realizar el código del robot. Aún así, nos encontramos con varios inconvenientes ya que al tener tiempo sin realizar cambios en este y nutrirnos de conocimiento, tuvimos que volver a aprender sobre el código. La parte positiva es que al ya contar con conocimiento, fue más fácil el entender el código y el funcionamiento del robot, lo que también facilito los futuros arreglos que requeriría el robot.


Los primeros meses nos enfocamos en el entendimiento de nuestro antiguo código y realizar un nuevo diseño del carro usando el programa de AutoCAD como herramienta principal, pero posteriormente empezamos a utilizar blender ya que es más versatil para realizar las figuras; y una vez finalizado el diseño procedimos a imprimirlo en 3D en la impresora del colegio. Luego pasamos a ensamblar las piezas e ir probándolas para su correcto ensamblaje y la coordinación de estas con el resto de los componentes que debía tener el carro. Los meses pasaron y el carro iba avanzando, siendo sometido a varios cambios durante el proceso entre los que se incluyen la distribución de los diferentes componentes. Finalmente logramos que funcionara y allí comenzamos con la programación del mismo, utilizando un Arduino Mega como cerebro del robot.


Nuestros primeros inconvenientes se presentaron al momento de volver a probar el robot, ya que nos presento nuevos problemas como por ejemplo, que las pilas que estábamos utilizando se empezaron a inflar, lo que nos preocupó mucho y nos obligó a ver otras opciones de batería para evitar cualquier inconveniente. Al comprar las nuevas pilas nos dimos cuenta que nos hacía falta un conector para que lograra tener contacto hacia el L298N, por lo que terminamos haciendo más compras de lo planeado y terminó retardando el proceso de creación del robot.


Luego, empezamos a probar nuevos componentes que nos pudieran dar con mejor exactitud las medidas de los sensores para que el robot trabaje de mejor manera. Igualmente al implementar estos componentes, algunos nos terminaron ayudando bastante como algunos nos terminaron dando muchos más inconvenientes que los que ya teníamos.


Al ver todos los inconvenientes que teníamos con el carro, tomamos la decisión de crear uno nuevo, por lo que nos terminamos basando en un diseño ya creado y montado en "thingiverse" y le realizamos cambios a su estructura para lograr adaptarla a nuestras necesidades del carro. Esto nos ayudo a tener un robot personalizado, mejor adaptado para la competencia, y ya teniendo una buena base del diseño nos aseguraba una buena distribución de los componentes. Esto nos presentó com un ligero retardo ya que fue casi como empezar de cero, pero nos ayudó a tener una mejor estructura.


Al tener que adaptarnos a una nueva estructura, fue un poco desafiante al momento de ingresar el sistema de giro ya que eran dimensiones distintas. Ya teniendo los componentes conectados, empezaron unos nuevos problemas. Estos mayormente fueron por los cables, obligándonos a buscar soluciones para mantener a los cables unidos entre sí y a los componentes. Mientras resolvíamos estos inconvenientes, se nos presentaron otros problemas como  de comunicación de los componentes a la placa, problemas con el código, entre muchos otros; pero igualmente logramos resolver cada uno de estos inconvenientes que se nos fueron presentando.

Dentro de poco tenemos nuestra primera competencia y estamos nerviosos por los errores que nos da el robot que aparecen de un momento a otro, pero gracias a todo nuestro equipo y a nuestros coachs, podemos aprender sobre nuestros errores para mejorar para las siguientes competencias e incluso superar los desafios que se nos tocara afrontar.


### Descripción del Proyecto
SONICAR es un proyecto de robótica desarrollado por estudiantes de bachillerato del Colegio Simón Bolívar II. El proyecto consiste en un vehículo autónomo capaz de navegar y evitar obstáculos utilizando un Arduino Mega. El vehículo emplea sensores de ultrasonido para detectar objetos en su entorno, un motor DC para la propulsión, un servo motor para la dirección y un módulo controlador de motor L298 para manejar el motor DC. Este proyecto proporciona una excelente oportunidad de aprendizaje en el campo de la robótica y la programación, integrando varios componentes y tecnologías para lograr su funcionalidad.




## Componentes Utilizados
### Lista de Materiales (BOM)
### 1. Estructura:
1.1 6x columnas principales 4cm x 0.4cm x 0.4cm 

1.2 Chasis 

1.3 Alambre

1.4 Silicón Caliente

1.5 Barra de conexión x 2

1.6 Tornillos x 19

1.7 Conector de Rueda x 2

1.8 Base de motor


### 2. Componentes Eléctricos:

2.1 Arduino Mega

2.2 L298N

2.3 Sensor de ultrasonido (Hc-sr04)

2.4 Sensores de Laser (VL53L0X-V2) x2

2.5 Varios cables macho-macho, hembra-hembra y macho-hembra

2.6 Pila de 5600mAH de litio

2.7 Protoboard sen

2.8 Cámara Huskylens


### 3. Componentes Mecánicos:

3.1 Ruedas x 4

3.2 Motor corriente directa (DC) 11V

3.3 Servomotor (SG90)


### Arduino Mega

El Arduino Mega es una placa de desarrollo de bajo costo, que permite realizar proyectos de programación y electrónica. Cuenta con un microcontrolador de 8 bits, capacidad de memoria limitada pero suficiente para muchos proyectos, y múltiples puertos para conectarse a otros componentes. En este proyecto, el Arduino Mega actúa como el cerebro del vehículo, tomando decisiones basadas en la información proporcionada por los sensores y controlando los motores. La simplicidad y versatilidad del Arduino Mega lo convierten en una plataforma ideal para proyectos educativos y de prototipado.


### Sensores Laser (VL53L0X-V2)

Se utilizan dos sensores lase VL53L0X-V2 para la medición de distancias. Estos sensores miden la distancia de objetos en un rango de distancia emitiendo un rayo de luz midiendo el tiempo que tarda entre su salida del componente hasta su regreso, permitiendo la detección de objetos y su desplazamiento de manera autónoma. Estos tipos de sensores son utilizados en este tipo de proyectos gracias a su precisión y menores inconvenientes comparados a otros sensores, y en este trabajo, son importantes para lograr la autonomía del vehículo.


### Pila de 5600mAH de litio

Se utilizó una pila de litio para lograr el funcionamiento de los componentes brindándoles corrientes para que puedan funcionar. Esta pila tiene una gran capacidad de carga y un voltaje considerable, lo que ayuda a evitar tener una gran cantidad de pilas y tener que cargarlas cada poco tiempo, volviendo mas eficiente el trabajo por ese aspecto.


### Sensor de Ultrasonido (HC-SR04)

Se utiliza un sensor de ultrasonido HC-SR04 para la detección de obstáculos. Estos sensores miden la distancia a objetos cercanos emitiendo un pulso de sonido ultrasonido y midiendo el tiempo que tarda en reflejarse. La distancia se calcula en función del tiempo que tarda el sonido en viajar hacia el objeto y regresar al sensor, permitiendo al vehículo detectar obstáculos y navegar de manera autónoma. Los sensores de ultrasonido son ampliamente utilizados en robótica debido a su precisión y bajo costo, y en este proyecto, son fundamentales para la capacidad de navegación del vehículo.


### Módulo Controlador de Motor (L298N)

El controlador de motor L298 permite controlar la velocidad y dirección de un motor de corriente continua (DC). Este módulo recibe las señales del Arduino y las traduce en comandos que el motor puede entender, permitiendo un control preciso de la propulsión del vehículo. El L298N es un controlador de motor dual H-Bridge que puede manejar dos motores DC, pero en este proyecto se utiliza solo uno. Su capacidad para manejar altos voltajes y corrientes lo hace ideal para proyectos de robótica y automóviles a pequeña escala.


### Motor DC

Un motor de corriente continua (DC) es un motor eléctrico que funciona con corriente directa. En este proyecto, el motor DC se utiliza para propulsar el vehículo. La velocidad y dirección del motor se controlan a través del módulo L298, permitiendo que el vehículo se mueva hacia adelante o hacia atrás según sea necesario. Los motores DC son conocidos por su simplicidad y eficiencia y son una opción popular para proyectos de robótica debido a su capacidad de control sencillo y su rendimiento fiable.


### Servo Motor

Un servo motor se utiliza para controlar la dirección del vehículo. Los servos son motores de precisión que pueden girar a posiciones específicas, lo cual es útil para aplicaciones que requieren movimientos precisos. En este caso, el servo motor se utiliza para girar las ruedas delanteras del vehículo, permitiendo que cambie de dirección cuando se detectan obstáculos. Los servo motores son esenciales en robótica por su capacidad de control preciso, lo que permite una dirección exacta y una navegación eficiente.


### Cables y Conectores

Se utilizan varios cables y conectores para interconectar todos los componentes del proyecto. Es importante utilizar cables de buena calidad y asegurar conexiones firmes para evitar problemas de comunicación y suministro de energía. Los cables y conectores adecuados garantizan que todos los componentes funcionen correctamente y se comuniquen de manera efectiva, lo cual es crucial para el rendimiento del vehículo.



### Integrantes del Equipo

El equipo responsable de este proyecto está compuesto por estudiantes de bachillerato del Colegio Simón Bolívar II, quienes han trabajado en colaboración para combinar sus habilidades en programación y electrónica:

•	José Chacón: José se encargó de la unificación del software con el hardware, desarrollando partes del código y amoldando el chasis del carro para un diseño mucho más de acuerdo a nuestras necesidades, al igual de asegurarse de que las señales se transmitan correctamente y que el sistema responda adecuadamente a los datos de los sensores. José también se encargó de mejorar el diseño del vehículo para tener un robot acorde las normativas tanto de peso, de distancia, al igual para un buen funcionamiento de los componentes.

•	Andrés Cazenave: Andrés se enfocó en la parte de hardware, asegurándose de que todos los componentes estuvieran correctamente conectados y funcionando adecuadamente. Su responsabilidad incluyó el montaje del circuito, la integración de los sensores, el motor y el controlador de motor, y la solución de problemas de hardware. Andrés también trabajó en la optimización del diseño del vehículo para asegurar una construcción sólida y eficiente, que pueda soportar el uso continuo y manejar diversas condiciones de operación.

•	Juán Perez: Juán trabajó en la parte del software, desarrollando el código que permite al vehículo tomar decisiones basadas en la información de los sensores y controlar los motores. Su trabajo incluye la programación en C++ para interactuar con los pines del Arduino y coordinar las acciones del vehículo. Juán igualmente trabajó en el diseño del vehículo para asegurar un mejor uso de los componentes.




## Descripción de los Módulos y su Relación con los Componentes Electromecánicos


### Módulos del Código


1.	Módulo de Sensores: Este módulo maneja la interacción con el sensor de ultrasonido y los sensores láser. Envía pulsos de disparo a los sensores y lee los pulsos de eco para calcular la distancia a los obstáculos. Los sensores láser envían rayos de luz y toman el tiempo que tarda en volver ese rayo para calcular la distancia de los objetos. Los datos de este módulo son cruciales para las decisiones de navegación del vehículo.
   

2.	Módulo de Control del Motor: Este módulo se encarga de la interfaz con el controlador de motor L298. Traduce comandos de alto nivel (como avanzar, retroceder, detenerse) en señales que controlan la velocidad y dirección del motor DC. Este módulo asegura un control preciso sobre la propulsión del vehículo.
   

3.	Módulo de Control del Servo: Este módulo controla el servo motor responsable de la dirección. Traduce los comandos direccionales en ángulos específicos para el servo, permitiendo que el vehículo gire sus ruedas delanteras de manera adecuada.

  
4.	Módulo de Control Principal: Este módulo integra los datos de los sensores y controla los módulos de motor y servo basándose en la lógica de navegación del vehículo. Es el cerebro central del vehículo, tomando decisiones sobre cómo moverse y girar basándose en las entradas de los sensores.



   
### Relación con los Componentes Electromecánicos



•	Sensores de Ultrasonido (HC-SR04): Estos sensores están conectados a los pines del Arduino Mega. El módulo de sensores envía señales de disparo a través de salidas y lee los ecos de retorno a través de entradas para calcular las distancias.


•	Motor DC y Controlador de Motor L298N: El módulo de control del motor envía señales desde los pines del Arduino Mega al controlador de motor L298N, que luego controla el voltaje y la corriente suministrados al motor DC, dictando su velocidad y dirección.


•	Servo Motor: El módulo de control del servo envía señales PWM desde un pin del Arduino Mega al servo motor, ajustando su posición para dirigir el vehículo.
Proceso para Construir/Compilar/Cargar el Código




### Construcción del Vehículo


1.	Ensamblar el Hardware:

o	Conectar los sensores HC-SR04 a los pines adecuados en el Arduino Mega.
o	Conectar el controlador de motor L298N al motor DC y a los pines del Arduino.
o	Conectar el servo motor a un pin del Arduino para el control PWM.
o	Asegurarse de que todos los componentes estén conectados de manera segura y alimentados.



2.	Preparar el Arduino Mega:

o	Asegurarse de tener el software Arduino IDE instalado en tu computadora.
o	Conectar el Arduino Mega a la computadora mediante un cable USB.
o	Cargar el código de control en el Arduino Mega desde el Arduino IDE.



3.	Clonar el Repositorio:

o	Clonar el repositorio del proyecto SONICAR desde GitHub.



4.	Ejecutar el Código:

o	Asegurarse de que todos los scripts y módulos estén en su lugar.
o	Ejecutar el código cargándolo en el Arduino Mega utilizando el Arduino IDE.




### Compilación y Carga

•	Los scripts en Arduino no requieren compilación adicional fuera del entorno de desarrollo Arduino IDE.
•	Cargar directamente el código de control en el Arduino Mega desde el Arduino IDE.



# Installation :books:
### System Requirements
* [Beak](https://beakit.com/)
<img src="https://t.bkit.co/w_66a28fc18c347.gif" />