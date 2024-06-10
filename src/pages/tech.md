---
layout: ../layouts/Blog.astro
poster: "https://imgs.search.brave.com/WDuGR56kTPiPRQC2ITncrxGU_gQNtxMcv0Cl70kTUzo/rs:fit:860:0:0/g:ce/aHR0cHM6Ly93LmZv/cmZ1bi5jb20vZmV0/Y2gvOTEvOTEwNWUw/YmQzNjJiMzg4M2U1/MGYwNmY4ZDA5Mjc4/ZDIuanBlZw"
title: "Matemáticas y Arduino"
subtitle: "Introducción a Modelos Matemáticos"
author: "Victoriano Juárez"
date: "abril 2, 2024"
---

## Explorando el Sistema Binario

> Lenguaje oculto de unos y ceros.

¿Sabían que cada vez que envían un mensaje de texto, ven un video en YouTube o incluso encienden su computadora, están utilizando un lenguaje oculto de unos y ceros? Este lenguaje, conocido como sistema binario, es fundamental no solo en la tecnología, ya que sin este lenguaje nuestros dispositivos móviles no funcionarían, sino también en la comprensión matemática de muchos sistemas. 

Imaginen que cada vez que encendemos una luz o usamos un sensor, estamos utilizando principios matemáticos fundamentales que pueden ser explicados con modelos matemáticos en el sistema binario y potenciación.

Es proyecto fascinante que se ha desarrollo. Utilizando un Arduino, sensores y luces LED, hemos creado un sistema que traduce la proximidad de un objeto en patrones de luces, demostrando de manera práctica y emocionante los principios del sistema binario y la potenciación.

El proyecto es importante porque traduce conceptos abstractos como el sistema binario y la potenciación en algo visual y tangible. Verán cómo los números binarios pueden controlarse con un sensor de proximidad y las luces representan que se encienden y apagan en respuesta a la proximidad de un objeto.

## Descripción del Problema

### Sistema Binario

El proyecto combina tres áreas fundamentales: matemática, programación y electrónica, sin embargo, nos centraremos especialmente en el aspecto matemático. El sistema ilustra de manera clara y palpable los principios del sistema binario y potenciación.

Utilizando un Arduino (Microcontrolador) como Cerebro Central. El sistema responde a la proximidad de un objeto a través de un sensor de distancia.

Cuando un objeto se acerca al sensor, este envía una señal (pulso electrónico) al Arduino, que interpreta la distancia y la convierte en un número binario. 

A su vez, este número binario se traduce en un patrón de luces LED que se encienden y apagan, mostrando visualmente el valor binario.

### FUNCIONAMIENTO DEL SISTEMA

**Componentes Principales:**

**Arduino:** Microcontrolador que procesa las señales del sensor y controla los LEDs.

**Sensor de Proximidad:** Dispositivo que detecta la distancia de un objeto y envía esta información al Arduino.

**LEDs:** Diodos emisores de luz que se encienden y apagan para representar los valores binarios.

### Procesamiento de la Señal en el Arduino

El Arduino recibe la señal del sensor y la convierte en un valor digital. Este valor representa la distancia medida.
Por ejemplo, si el sensor detecta que el objeto está a una distancia muy cercana, el valor puede ser 1. Si el objeto está más lejos, el valor puede ser 3, y así sucesivamente.

### DESARROLLO DEL MODELO MATEMÁTICO APLICADO
#### Introducción al Sistema Binario y su Relación con el Proyecto:

**Definición del Sistema Binario:**

En matemáticas, el sistema binario es un sistema de numeración en el que todos los números se representan utilizando solo dos dígitos: 0 y 1.

Este sistema se basa en la base 2, a diferencia del sistema decimal que usamos habitualmente, que se basa en la base 10 y utiliza los dígitos del 0 al 9.

**Aplicación en el Proyecto:**

En nuestro proyecto, utilizamos el sistema binario para representar las distancias medidas por el sensor de proximidad.

Cada distancia se convierte en un valor binario que se traduce en un patrón de luces LED.

### Tabla de Valores Binarios:

**Estructura de la Tabla de Valores:**

"Para entender cómo se representan los números en binario, primero construimos una tabla de valores. Esta tabla muestra el valor de cada posición binaria de derecha a izquierda, aumentando exponencialmente por la potencia de 2.

**Ejemplo Práctico:**

Consideremos el número 26. Para convertirlo a binario, identificamos los valores que suman 26 utilizando las potencias de 2.


**NOTA:** “Esto significa que los LEDs correspondientes a las posiciones 16, 8 y 2 se encenderán. "Y el resultado en sistema decimal es: 26.

### Conversión de Distancia a Binario

**Medición de la Distancia:**

El sensor de proximidad mide la distancia de un objeto y envía un valor analógico al Arduino. Este valor se convierte en un número binario.

**Asignación de Rango:**

"Definimos rangos de distancia y asignamos un valor binario a cada rango. Por ejemplo, si la distancia medida es muy corta, podríamos asignar el valor binario '1'. Si es mayor, podríamos asignar '2', '3', y así sucesivamente."

#### Ley de la Potenciación Aplicada

**Definición y Reglas:**

La potenciación es un concepto matemático fundamental utilizado en el proyecto. En el sistema binario, la base siempre es 2, y los exponentes determinan las posiciones de los bits.

**Reglas básicas de la potenciación:**

Todo número elevado a la potencia 0 es igual a 1.
El exponente nos indica cuántas veces se multiplica la base por sí misma.

**Aplicación Práctica:**

Por ejemplo, en el número binario, 001101101 tenemos 2^6 + 2^5 + 2^3 + 2^2 + 2^0, que se traduce en 64 + 32+ 8 + 4 + 1 = 109. Esta operación muestra cómo un número decimal puede representarse en binario y cómo encender los LEDs correspondientes.

#### Visualización de la Matemática en el Proyecto:

**Proceso Visual:**

"Al acercar un objeto al sensor, el Arduino procesa la señal, la convierte en un valor binario y enciende los LEDs de acuerdo a ese valor. Este proceso visualiza cómo una medida analógica (la distancia) se traduce en una representación digital (binaria)."

**Ejemplo de Demostración:**

Acerque un objeto al sensor y observe cómo las luces responden. Si está muy cerca, verá un solo LED encendido, representando el número 1 en binario. A medida que aleja el objeto, más LEDs se encenderán en patrones binarios como 010 (2) o 101 (5), mostrando cómo los valores cambian con la distancia.

Nuestro proyecto no solo muestra la intersección entre matemática, programación y electrónica, sino que también facilita la comprensión de conceptos abstractos como el sistema binario y la potenciación. Este modelo matemático aplicado es fundamental para entender cómo se procesan y representan digitalmente las señales en el mundo real.


El proyecto Sistema Binario ha demostrado ser una herramienta valiosa para la enseñanza y el aprendizaje de conceptos matemáticos fundamentales, como el sistema binario y la potenciación, de una manera práctica y visual.

A través de la utilización de un Arduino, sensores de proximidad y luces LED, el proyecto ha logrado traducir con éxito la abstracción del sistema binario en una experiencia tangible. Los estudiantes pueden observar cómo los números binarios se representan mediante patrones de luces encendidas y apagadas, lo que les permite comprender mejor su funcionamiento y aplicación en el mundo real.

Además de su valor educativo, el proyecto también destaca intersección entre las áreas de matemática, programación y electrónica. Los estudiantes pueden poner en práctica sus conocimientos en estas áreas para diseñar, construir y programar un sistema funcional que responde a estímulos del mundo real.

En definitiva, el proyecto Sistema Binario ha sido una experiencia de aprendizaje enriquecedora para nosotros y para los estudiantes, permitiéndoles comprender conceptos matemáticos complejos de una manera significativa y desarrollar habilidades prácticas en diversas áreas.
