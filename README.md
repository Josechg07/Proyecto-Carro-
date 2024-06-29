# SONICAR

## Descripción del Proyecto

SONICAR es un proyecto de robótica desarrollado por estudiantes de bachillerato del Colegio Simón Bolívar II. El proyecto consiste en un vehículo autónomo capaz de navegar y evitar obstáculos utilizando un Arduino Uno. El vehículo emplea sensores de ultrasonido para detectar objetos en su entorno, un motor DC para la propulsión, un servo motor para la dirección y un módulo controlador de motor L298 para manejar el motor DC. Este proyecto proporciona una excelente oportunidad de aprendizaje en el campo de la robótica y la programación, integrando varios componentes y tecnologías para lograr su funcionalidad.

## Componentes Utilizados

### Lista de Materiales (BOM)
- 1 × Arduino Uno
- 3 × Sensores de Ultrasonido (HC-SR04)
- 1 × Controlador de Motor L298N
- 1 × Servo Motor SG90
- 1 × Motor DC AEDIKO
- 2 × Pilas 18650
- 1 × Porta Baterías para 2 Pilas 18650
- 4 × Ruedas
- Varios Cables de Conexión
- Varias Piezas Impresas en 3D para el Chasis

### Arduino Uno 
El Arduino Uno es una placa de desarrollo de bajo costo y tamaño compacto que permite realizar proyectos de programación y electrónica. Cuenta con un microcontrolador de 8 bits, capacidad de memoria limitada pero suficiente para muchos proyectos, y múltiples puertos para conectarse a otros componentes. En este proyecto, el Arduino Uno actúa como el cerebro del vehículo, tomando decisiones basadas en la información proporcionada por los sensores y controlando los motores. La simplicidad y versatilidad del Arduino Uno lo convierten en una plataforma ideal para proyectos educativos y de prototipado.

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

## Integrantes del Equipo

El equipo responsable de este proyecto está compuesto por estudiantes de bachillerato del Colegio Simón Bolívar II, quienes han trabajado en colaboración para combinar sus habilidades en programación y electrónica:

- **José Chacón**: José se encargó de la parte de software, desarrollando el código que permite al vehículo tomar decisiones basadas en la información de los sensores y controlar los motores. Su trabajo incluye la programación en Python para interactuar con los pines del Arduino y coordinar las acciones del vehículo. José también se encargó de la integración del software con el hardware, asegurándose de que las señales se transmitan correctamente y que el sistema responda adecuadamente a los datos de los sensores.

- **Andrés Cazenve**: Andrés se enfocó en la parte de hardware, asegurándose de que todos los componentes estuvieran correctamente conectados y funcionando adecuadamente. Su responsabilidad incluyó el montaje del circuito, la integración de los sensores, el motor y el controlador de motor, y la solución de problemas de hardware. Andrés también trabajó en la optimización del diseño del vehículo para asegurar una construcción sólida y eficiente, que pueda soportar el uso continuo y manejar diversas condiciones de operación.

## Descripción de los Módulos y su Relación con los Componentes Electromecánicos

### Módulos del Código

1. **Módulo de Sensores**:
   Este módulo maneja la interacción con los sensores de ultrasonido. Envía pulsos de disparo a los sensores y lee los pulsos de eco para calcular la distancia a los obstáculos. Los datos de este módulo son cruciales para las decisiones de navegación del vehículo.

2. **Módulo de Control del Motor**:
   Este módulo se encarga de la interfaz con el controlador de motor L298. Traduce comandos de alto nivel (como avanzar, retroceder, detenerse) en señales que controlan la velocidad y dirección del motor DC. Este módulo asegura un control preciso sobre la propulsión del vehículo.

3. **Módulo de Control del Servo**:
   Este módulo controla el servo motor responsable de la dirección. Traduce los comandos direccionales en ángulos específicos para el servo, permitiendo que el vehículo gire sus ruedas delanteras de manera adecuada.

4. **Módulo de Control Principal**:
   Este módulo integra los datos de los sensores y controla los módulos de motor y servo basándose en la lógica de navegación del vehículo. Es el cerebro central del vehículo, tomando decisiones sobre cómo moverse y girar basándose en las entradas de los sensores.

### Relación con los Componentes Electromecánicos

- **Sensores de Ultrasonido (HC-SR04)**
Estos sensores están conectados a los pines del Arduino Uno. El módulo de sensores envía señales de disparo a través de salidas y lee los ecos de retorno a través de entradas para calcular las distancias.

- **Motor DC y Controlador de Motor L298N**
El módulo de control del motor envía señales desde los pines del Arduino Uno al controlador de motor L298N, que luego controla el voltaje y la corriente suministrados al motor DC, dictando su velocidad y dirección.

- **Servo Motor**
El módulo de control del servo envía señales PWM desde un pin del Arduino Uno al servo motor, ajustando su posición para dirigir el vehículo.


## Proceso para Construir/Compilar/Cargar el Código

## Construcción del Vehículo

1. **Ensamblar el Hardware**:
   - Conectar los sensores HC-SR04 a los pines adecuados en el Arduino Uno.
   - Conectar el controlador de motor L298N al motor DC y a los pines del Arduino.
   - Conectar el servo motor a un pin del Arduino para el control PWM.
   - Asegurarse de que todos los componentes estén conectados de manera segura y alimentados.

2. **Preparar el Arduino Uno**:
   - Asegurarse de tener el software Arduino IDE instalado en tu computadora.
   - Conectar el Arduino Uno a la computadora mediante un cable USB.
   - Cargar el código de control en el Arduino Uno desde el Arduino IDE.

3. **Clonar el Repositorio**:
   - Clonar el repositorio del proyecto SONICAR desde GitHub.

4. **Ejecutar el Código**:
   - Asegurarse de que todos los scripts y módulos estén en su lugar.
   - Ejecutar el código cargándolo en el Arduino Uno utilizando el Arduino IDE.

### Compilación y Carga

- Los scripts en Arduino no requieren compilación adicional fuera del entorno de desarrollo Arduino IDE.
- Cargar directamente el código de control en el Arduino Uno desde el Arduino IDE.

## Contribuciones

Las contribuciones son bienvenidas. Si deseas contribuir al proyecto, puedes hacerlo a través de GitHub. Asegúrate de seguir las guías de estilo del proyecto y probar tus cambios antes de hacer un pull request. Agradecemos cualquier tipo de contribución, ya sea en forma de sugerencias para mejorar el código, reportes de errores, mejoras de la documentación o nuevas funcionalidades. Tu participación ayuda a hacer de SONICAR un proyecto mejor y más completo, y valoramos todas las ideas y comentarios que puedan aportar a su desarrollo continuo.

El proyecto SONICAR es solo el comienzo. Con la colaboración de la comunidad y la implementación de nuevas ideas, podemos llevar este proyecto a niveles superiores y explorar nuevas fronteras en el campo de la robótica y la inteligencia artificial. Estamos emocionados de ver a dónde puede llegar este proyecto y cómo puede evolucionar con el tiempo, gracias al apoyo y la creatividad de la comunidad global de desarrolladores.

¡Gracias por tu interés en SONICAR!
