# SONICAR

## Descripción del Proyecto

SONICAR es un proyecto de robótica desarrollado por estudiantes de bachillerato del Colegio Simón Bolívar II. El proyecto consiste en un vehículo autónomo capaz de navegar y evitar obstáculos utilizando una Raspberry Pi 4B. El vehículo emplea sensores de ultrasonido para detectar objetos en su entorno, un motor DC para la propulsión, un servo motor para la dirección y un módulo controlador de motor L298 para manejar el motor DC. Este proyecto proporciona una excelente oportunidad de aprendizaje en el campo de la robótica y la programación, integrando varios componentes y tecnologías para lograr su funcionalidad.

## Componentes Utilizados

### Raspberry Pi 4B
La Raspberry Pi 4B es una computadora de bajo costo y tamaño reducido que permite realizar proyectos de programación y electrónica. Cuenta con un procesador de cuatro núcleos, capacidad de memoria de hasta 4GB y múltiples puertos GPIO para conectarse a otros componentes. En este proyecto, la Raspberry Pi actúa como el cerebro del vehículo, tomando decisiones basadas en la información proporcionada por los sensores y controlando los motores. La flexibilidad y capacidad de la Raspberry Pi la convierten en una plataforma ideal para proyectos educativos y de prototipado.

### Sensores de Ultrasonido (HC-SR04)
Se utilizan tres sensores de ultrasonido HC-SR04 para la detección de obstáculos. Estos sensores miden la distancia a objetos cercanos emitiendo un pulso de sonido ultrasonido y midiendo el tiempo que tarda en reflejarse. La distancia se calcula en función del tiempo que tarda el sonido en viajar hacia el objeto y regresar al sensor, permitiendo al vehículo detectar obstáculos y navegar de manera autónoma. Los sensores de ultrasonido son ampliamente utilizados en robótica debido a su precisión y bajo costo, y en este proyecto, son fundamentales para la capacidad de navegación del vehículo.

### Módulo Controlador de Motor (L298)
El controlador de motor L298 permite controlar la velocidad y dirección de un motor de corriente continua (DC). Este módulo recibe las señales de la Raspberry Pi y las traduce en comandos que el motor puede entender, permitiendo un control preciso de la propulsión del vehículo. El L298 es un controlador de motor dual H-Bridge que puede manejar dos motores DC, pero en este proyecto se utiliza solo uno. Su capacidad para manejar altos voltajes y corrientes lo hace ideal para proyectos de robótica y automóviles a pequeña escala.

### Motor DC
Un motor de corriente continua (DC) es un motor eléctrico que funciona con corriente directa. En este proyecto, el motor DC se utiliza para propulsar el vehículo. La velocidad y dirección del motor se controlan a través del módulo L298, permitiendo que el vehículo se mueva hacia adelante o hacia atrás según sea necesario. Los motores DC son conocidos por su simplicidad y eficiencia y son una opción popular para proyectos de robótica debido a su capacidad de control sencillo y su rendimiento fiable.

### Servo Motor
Un servo motor se utiliza para controlar la dirección del vehículo. Los servos son motores de precisión que pueden girar a posiciones específicas, lo cual es útil para aplicaciones que requieren movimientos precisos. En este caso, el servo motor se utiliza para girar las ruedas delanteras del vehículo, permitiendo que cambie de dirección cuando se detectan obstáculos. Los servo motores son esenciales en robótica por su capacidad de control preciso, lo que permite una dirección exacta y una navegación eficiente.

### Cables y Conectores
Se utilizan varios cables y conectores para interconectar todos los componentes del proyecto. Es importante utilizar cables de buena calidad y asegurar conexiones firmes para evitar problemas de comunicación y suministro de energía. Los cables y conectores adecuados garantizan que todos los componentes funcionen correctamente y se comuniquen de manera efectiva, lo cual es crucial para el rendimiento del vehículo.

## Integrantes del Equipo

El equipo responsable de este proyecto está compuesto por estudiantes de bachillerato del Colegio Simón Bolívar II, quienes han trabajado en colaboración para combinar sus habilidades en programación y electrónica:

- **José Chacón**: José se encargó de la parte de software, desarrollando el código que permite al vehículo tomar decisiones basadas en la información de los sensores y controlar los motores. Su trabajo incluye la programación en Python para interactuar con los pines GPIO de la Raspberry Pi y coordinar las acciones del vehículo. José también se encargó de la integración del software con el hardware, asegurándose de que las señales se transmitan correctamente y que el sistema responda adecuadamente a los datos de los sensores.

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

- **Sensores de Ultrasonido (HC-SR04)**: Estos sensores están conectados a los pines GPIO de la Raspberry Pi. El Módulo de Sensores envía señales de disparo a través de salidas GPIO y lee los ecos de retorno a través de entradas GPIO para calcular las distancias.

- **Motor DC y Controlador de Motor L298N**: El Módulo de Control del Motor envía señales desde los pines GPIO al controlador de motor L298N, que luego controla el voltaje y la corriente suministrados al motor DC, dictando su velocidad y dirección.

- **Servo Motor**: El Módulo de Control del Servo envía señales PWM desde un pin GPIO al servo motor, ajustando su posición para dirigir el vehículo.

## Proceso para Construir/Compilar/Cargar el Código

### Construcción del Vehículo

1. **Ensamblar el Hardware**:
   - Conectar los sensores HC-SR04 a los pines GPIO apropiados en la Raspberry Pi.
   - Conectar el controlador de motor L298 al motor DC y a los pines GPIO.
   - Conectar el servo motor a un pin GPIO para control PWM.
   - Asegurarse de que todos los componentes estén conectados de manera segura y alimentados.

2. **Preparar la Raspberry Pi**:
   - Instalar el sistema operativo Raspbian en la Raspberry Pi.
   - Actualizar el sistema con `sudo apt update` y `sudo apt upgrade`.
   - Instalar las bibliotecas necesarias como `RPi.GPIO`.

3. **Clonar el Repositorio**:
   - Clonar el repositorio del proyecto SONICAR desde GitHub.

4. **Ejecutar el Código**:
   - Asegurarse de que todos los scripts y módulos estén en su lugar.
   - Ejecutar el script de control principal usando `python3 sonicar.py`.

### Compilación y Carga

- Los scripts en Python no requieren compilación. Asegurarse de que la Raspberry Pi tenga Python instalado.
- Ejecutar directamente el script de control principal desde la terminal o configurarlo para que se ejecute al iniciar para una operación autónoma.

## Contribuciones

Las contribuciones son bienvenidas. Si deseas contribuir al proyecto, puedes hacerlo a través de GitHub. Asegúrate de seguir las guías de estilo del proyecto y probar tus cambios antes de hacer un pull request. Agradecemos cualquier tipo de contribución, ya sea en forma de sugerencias para mejorar el código, reportes de errores, mejoras de la documentación o nuevas funcionalidades. Tu participación ayuda a hacer de SONICAR un proyecto mejor y más completo, y valoramos todas las ideas y comentarios que puedan aportar a su desarrollo continuo.

El proyecto SONICAR es solo el comienzo. Con la colaboración de la comunidad y la implementación de nuevas ideas, podemos llevar este proyecto a niveles superiores y explorar nuevas fronteras en el campo de la robótica y la inteligencia artificial. Estamos emocionados de ver a dónde puede llegar este proyecto y cómo puede evolucionar con el tiempo, gracias al apoyo y la creatividad de la comunidad global de desarrolladores.

¡Gracias por tu interés en SONICAR!
