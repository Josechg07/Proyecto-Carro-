# SONICAR
# Bitácora

Nosotros, Andrés Casenave y José Chacón, somos estudiantes de 4to año del Colegio Simón Bolívar II. Al conocer de este concurso nos constituimos como un equipo de trabajo con el sueño de aprender sobre esta competencia, conocer a nuevas personas, trabajar juntos para cumplir un objetivo y representar al colegio. Sin embargo, nuestros conocimientos eran limitados y representó un gran reto para nosotros adquirir todas las destrezas que exigía este concurso, por lo que solicitamos ayuda a nuestros entrenadores para adquirir conocimientos tanto de diseño, robótica, mecánica, electrónica y programación. Han sido unos arduos meses de trabajo y estudio para resolver cada uno de los retos que impone tener un carro autónomo.

Al inicio del proyecto, nuestro primer contratiempo, fue no conseguir al tercer compañero que quisiera comprometerse en esta aventura de aprendizaje, por lo que terminamos decidiendo llevar a cabo este reto con un integrante menos. Esto si bien lo vimos al principio como un obstáculo, luego nos dimos cuenta de la oportunidad que esto representaba al involucrarnos siempre los dos en cada etapa del proceso.

Los primeros meses nos enfocamos en el diseño del carro usando el programa de AutoCAD como herramienta principal; y una vez finalizado el diseño procedimos a imprimirlo en 3D en la impresora del colegio. Luego pasamos a ensamblar las piezas e ir probándolas para su correcto ensamblaje y la coordinación de estas con el resto de los componentes que debía tener el carro. Los meses pasaron y el carro iba avanzando, siendo sometido a varios cambios durante el proceso entre los que se incluyen la distribución de los diferentes componentes. Finalmente logramos que funcionara y allí comenzamos con la programación del mismo, utilizando el Raspberry Pi 4 como el cerebro del robot.

Nuestra primera competencia se acercaba y nos sentíamos preparados ya que el robot funcionaba y cumplía con los requerimientos iniciales de la competencia de dar 3 vueltas en nuestra pista. El día de la competencia llegó y en el momento de posicionar el robot en la pista de la competencia en el IEA, el carro no se movió. Nos sentimos frustrados, pero logramos superar este obstáculo al encontrar que un cable era el que no permitía su funcionamiento, al igual que la falta de la conexión a internet  la cual no estaba permitida y hasta ese momento no estábamos al tanto.

Luego de esta primera experiencia decidimos rediseñar totalmente el carro, basándonos en el canal T-Lab para el diseño del mismo. Decidimos imprimirlo de nuevo, pero al colocar las piezas del antiguo carro en el nuevo, nos vimos limitados en el espacio que teníamos, así que decidimos crear un segundo piso, eliminando porciones que no fueran necesarias en las que irían los componentes más livianos del carro, superando así este problema.

Para evitar el inconveniente que tuvimos con el Raspberry Pi, decidimos cambiarlo por un Arduino UNO, el cual nos facilitó la programación debido a que su lenguaje de programación era más sencillo. Así mismo, al cambiar el diseño del carro también hubo que cambiarle el tamaño de las ruedas para que el carro no rozara en el piso.

El día de nuestra segunda competencia, ahora en Maracay, llegó y a la hora de poner el carro en la pista, este tuvo un buen desempeño y el jurado nos otorgó gratamente un buen puntaje y el puesto de primer lugar en nuestra categoría. Sin embargo, también nos topamos con un inconveniente que fue que nuestra cámara principal se sobrecalentaba y terminó por quemarse junto al Arduino UNO. Al día siguiente, con ayuda de nuestros entrenadores, validamos los componentes de la cámara que se quemaron causando así que el Arduino se quemara junto a este. Por suerte contábamos con un Arduino Mega de respaldo, este a diferencia del Arduino UNO, contiene una mayor cantidad de pines disponibles. Al juntar todos los componentes al nuevo diseño del carro, funcionó otra vez de manera exitosa, y gracias a que se le agregó un piso más, logramos tener un mejor orden de los cables y el resto de los componentes teniendo así un prototipo de carro más organizado y agradable a la vista. Estábamos listos para nuestra tercera competencia.

En nuestra tercera experiencia compitiendo, el carro no tuvo el desempeño esperado, chocaba. Luego de analizar las posibles razones nos dimos cuenta que la pista no contaba con las medidas que teníamos establecidas para la competencia y con las cuales habíamos practicado. Sumado a esto, perdimos una de las cámaras, previo al torneo. Tuvimos entonces in situ que desarrollar un código totalmente nuevo solo para esta ocasión, contando con un tiempo mucho menor al que estábamos acostumbrados.

Por último, tenemos un nuevo diseño en prueba, que nos permite ponerle más componentes al carro debido al amplio espacio que tiene a diferencia del prototipo anterior. Decidimos cambiar el carro ya que con la implementación del Raspberry Pi 4 para el funcionamiento de la cámara, requeríamos de un espacio grande para tener el Arduino Mega y el Raspberry funcionando al mismo tiempo y tener el desempeño deseado.

Hoy en día, SONICAR sigue estando en modificaciones ya que es un prototipo que ha ido evolucionando y adquiriendo cada vez una mayor autonomía. Estamos aprendiendo y preparándonos para los nuevos retos que establece la competencia, no solo en el establecimiento de sensores para el reconocimiento de colores y la decisión autónoma de cómo superar los obstáculos, sino en todas las estrategias que debemos considerar al momento de la programación y toma de decisiones para el funcionamiento autónomo del mismo. Sin lugar a dudas esta ha sido una maravillosa experiencia de creación, ensayo, observación y aprendizaje a partir de las vivencias.

### Descripción del Proyecto
SONICAR es un proyecto de robótica desarrollado por estudiantes de bachillerato del Colegio Simón Bolívar II. El proyecto consiste en un vehículo autónomo capaz de navegar y evitar obstáculos utilizando un Arduino Mega. El vehículo emplea sensores de ultrasonido para detectar objetos en su entorno, un motor DC para la propulsión, un servo motor para la dirección y un módulo controlador de motor L298 para manejar el motor DC. Este proyecto proporciona una excelente oportunidad de aprendizaje en el campo de la robótica y la programación, integrando varios componentes y tecnologías para lograr su funcionalidad.

## Componentes Utilizados
### Lista de Materiales (BOM)
### 1. Estructura:
1.1 4x columnas principales 7mm x 7mm x 6cm
1.2 Chasis
1.3 Alambre
1.4 Pasantes x 2
1.5 Argollas x 2
1.6 Extensiones x 2
1.7 Tapas x2
1.8 Bases de tapas x2
1.9 Tablón
1.10 Base de servomotor

### 2. Componentes Eléctricos:
2.1 Arduino Mega
2.2 Raspberry Pi 4
2.3 L298N
2.4 Sensores de ultrasonido (Hc-sr04) x3
2.5 Varios cables macho-macho, hembra-hembra y macho-hembra
2.6 Base de pila de litio
2.7 Protoboard
2.8 Raspberri Pi OV5647

### 3. Componentes Mecánicos:
3.1 Ruedas x 4
3.2 Motor TT DC 3-6V
3.3 Servomotor (SG90)


### Arduino Mega

El Arduino Mega es una placa de desarrollo de bajo costo, que permite realizar proyectos de programación y electrónica. Cuenta con un microcontrolador de 8 bits, capacidad de memoria limitada pero suficiente para muchos proyectos, y múltiples puertos para conectarse a otros componentes. En este proyecto, el Arduino Mega actúa como el cerebro del vehículo, tomando decisiones basadas en la información proporcionada por los sensores y controlando los motores. La simplicidad y versatilidad del Arduino Mega lo convierten en una plataforma ideal para proyectos educativos y de prototipado.

### Raspberry Pi 4

El Raspberry Pi 4 es una computadora de bajo costo y alto rendimiento, diseñada para proyectos de midleware. Equipada con un procesador ARM Cortex-A72 de 64 bits, ofrece una mayor capacidad de memoria y rendimiento en comparación con versiones anteriores. Además, cuenta con múltiples puertos USB, GPIO, y soporte para doble pantalla 4K, lo que permite conectarse a una amplia variedad de componentes y periféricos. En este proyecto, el Raspberry Pi 4 actúa como el centro de procesamiento avanzado, manejando tareas complejas y ejecutando algoritmos que requieren mayor poder de cómputo. La potencia y versatilidad del Raspberry Pi 4 lo convierten en una plataforma ideal para proyectos avanzados de prototipado, educación y desarrollo tecnológico.

### Raspberri Pi OV5647

La cámara Raspberry Pi OV5647 es un modelo de cámara de alta calidad, que tiene una resolución de 5 megapíxeles, esta es capaz de capturar imágenes nítidas y claras. Su ramalazo compacto la ha hecho ideal para nuestro proyecto, además de su facilidad de uso, versatilidad y bajo costo.

### Sensores de Ultrasonido (HC-SR04)

Se utilizan tres sensores de ultrasonido HC-SR04 para la detección de obstáculos. Estos sensores miden la distancia a objetos cercanos emitiendo un pulso de sonido ultrasonido y midiendo el tiempo que tarda en reflejarse. La distancia se calcula en función del tiempo que tarda el sonido en viajar hacia el objeto y regresar al sensor, permitiendo al vehículo detectar obstáculos y navegar de manera autónoma. Los sensores de ultrasonido son ampliamente utilizados en robótica debido a su precisión y bajo costo, y en este proyecto, son fundamentales para la capacidad de navegación del vehículo.

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
•	**José Chacón**: José se encargó de la parte de software, desarrollando el código que permite al vehículo tomar decisiones basadas en la información de los sensores y controlar los motores. Su trabajo incluye la programación en Python para interactuar con los pines del Arduino y coordinar las acciones del vehículo. José también se encargó de la integración del software con el hardware, asegurándose de que las señales se transmitan correctamente y que el sistema responda adecuadamente a los datos de los sensores.
•	**Andrés Cazenave**: Andrés se enfocó en la parte de hardware, asegurándose de que todos los componentes estuvieran correctamente conectados y funcionando adecuadamente. Su responsabilidad incluyó el montaje del circuito, la integración de los sensores, el motor y el controlador de motor, y la solución de problemas de hardware. Andrés también trabajó en la optimización del diseño del vehículo para asegurar una construcción sólida y eficiente, que pueda soportar el uso continuo y manejar diversas condiciones de operación.

## Descripción de los Módulos y su Relación con los Componentes Electromecánicos

### Módulos del Código

1.	**Módulo de Sensores**: Este módulo maneja la interacción con los sensores de ultrasonido. Envía pulsos de disparo a los sensores y lee los pulsos de eco para calcular la distancia a los obstáculos. Los datos de este módulo son cruciales para las decisiones de navegación del vehículo.
   
2.	**Módulo de Control del Motor**: Este módulo se encarga de la interfaz con el controlador de motor L298. Traduce comandos de alto nivel (como avanzar, retroceder, detenerse) en señales que controlan la velocidad y dirección del motor DC. Este módulo asegura un control preciso sobre la propulsión del vehículo.
   
3.	**Módulo de Control del Servo**: Este módulo controla el servo motor responsable de la dirección. Traduce los comandos direccionales en ángulos específicos para el servo, permitiendo que el vehículo gire sus ruedas delanteras de manera adecuada.
   
4.	**Módulo de Control Principal**: Este módulo integra los datos de los sensores y controla los módulos de motor y servo basándose en la lógica de navegación del vehículo. Es el cerebro central del vehículo, tomando decisiones sobre cómo moverse y girar basándose en las entradas de los sensores.
   
### Relación con los Componentes Electromecánicos

•	**Sensores de Ultrasonido (HC-SR04)**: Estos sensores están conectados a los pines del Arduino Mega. El módulo de sensores envía señales de disparo a través de salidas y lee los ecos de retorno a través de entradas para calcular las distancias.

•	**Motor DC y Controlador de Motor L298N**: El módulo de control del motor envía señales desde los pines del Arduino Mega al controlador de motor L298N, que luego controla el voltaje y la corriente suministrados al motor DC, dictando su velocidad y dirección.

•	**Servo Motor**: El módulo de control del servo envía señales PWM desde un pin del Arduino Mega al servo motor, ajustando su posición para dirigir el vehículo.
Proceso para Construir/Compilar/Cargar el Código

### Construcción del Vehículo

1.	**Ensamblar el Hardware**:
o	Conectar los sensores HC-SR04 a los pines adecuados en el Arduino Mega.
o	Conectar el controlador de motor L298N al motor DC y a los pines del Arduino.
o	Conectar el servo motor a un pin del Arduino para el control PWM.
o	Asegurarse de que todos los componentes estén conectados de manera segura y alimentados.

2.	**Preparar el Arduino Mega**:
o	Asegurarse de tener el software Arduino IDE instalado en tu computadora.
o	Conectar el Arduino Mega a la computadora mediante un cable USB.
o	Cargar el código de control en el Arduino Mega desde el Arduino IDE.

3.	**Clonar el Repositorio**:
o	Clonar el repositorio del proyecto SONICAR desde GitHub.

4.	**Ejecutar el Código**:
o	Asegurarse de que todos los scripts y módulos estén en su lugar.
o	Ejecutar el código cargándolo en el Arduino Mega utilizando el Arduino IDE.


### Compilación y Carga

•	Los scripts en Arduino no requieren compilación adicional fuera del entorno de desarrollo Arduino IDE.
•	Cargar directamente el código de control en el Arduino Mega desde el Arduino IDE.

