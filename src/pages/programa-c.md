---
layout: ../layouts/Blog.astro
poster: "https://imgs.search.brave.com/xSZnVkl84JYNcTkUxMAPRh9JXAxNprf2MdvAqhwWTtU/rs:fit:860:0:0/g:ce/aHR0cHM6Ly93YWxs/cGFwZXJjYXZlLmNv/bS93cC93cDMyOTUy/NTIuanBn"
title: "¿Cómo programar en C"
subtitle: "Aprender a programar en C"
date: "marzo 25, 2024"
author: "Victoriano Juárez"
---

## Lectura: Prgramaci&oacute;n en C

<div align="center">
<img title="Programacion en C" src="https://mx.all.biz/img/mx/catalog/32273.jpeg" alt="Programacion en C" style="zoom: 100%;" />
</div>

> Jordi Bataller Mascarell, 
> 
> Rafael Magdalena Benedito

Para entender un lenguaje de programación es necesario introducir, conocer el entorno en que este tiene significa. En el procesamiento de Información mediante ordenadores.

### Ordenadores

Un ordenador es un dispositivo electrónico que **procesa, transforma o elabora información**. A partir de **datos de entrada** y **datos de salida**.
El Ordenardor tiene mecanismos para obtener información y para mostrarla y procesarla.

<img title="" src="https://images.unsplash.com/photo-1598986646512-9330bcc4c0dc?w=500&auto=format&fit=crop&q=60&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxzZWFyY2h8M3x8Y29wdXRhZG9yYXN8ZW58MHx8MHx8fDA%3D" alt="Ordenador" style="zoom:47%;" >

### Procesador y Memoria

Es la unidad física que realiza el procesamiento, se le llama **Procesador o Unidad Centrao de Proceso  | __CPU, Central process unit en inglés__**. Para que el procesador pueda manipular los datos necesita que éstos estén almacenados en algún dispositivo al que pueda acceder de forma rápida y directa. Al dispoisitivo se le denomian **Memoria de Acceso Aleatorio** | **Random Access Memory - RAM**. El procesador y la RAM, **sólo** trabaja con esta memoria.

<img title="" src="https://images.unsplash.com/photo-1627281795244-0f5db916344a?w=500&auto=format&fit=crop&q=60&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxzZWFyY2h8MTZ8fGNwdSUyMGFuZCUyMHJhbXxlbnwwfHwwfHx8MA%3D%3D" alt="" style="zoom:57%;">

### Instrucciones de Código Máquina

Código Máquina, se le conoce el conjunto de operaciones básicas que un procesaodr pude ejecutar. Incluye operaciones aritméticas **(sumar, restar, multiplicar, dividir)**, comparaciones de magnitud **(mayor, menor, igual)**, operaciones lógicas (Y, O, NO) y operaciones de gestión de la ejecuación (para indicar, cuál es la siguiente instrucción a ejecutar). Además, las operaciones para comunicarse y gestionar los dispositivos perifericos dedicados a entrada y salida de información.

<img title="" src="https://images.unsplash.com/photo-1558986377-c44f6a2b50f0?q=80&w=987&auto=format&fit=crop&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D" alt="Código Máquina" style="zoom:30%;">

### Programa y Ejecución del Programa

> Un programa es un conjunto de instrucciones de código máquina. El programa, como unidad, indica al procesador la serie de acciones que éste debe efectuar para llevar a cabo un determinado procesamento de información.

En la RAM, además de los datos aprocesar, se encuentra también el programa que el procesador está ejecutando. La forma en que funciona el procesador es sencilla. Hay un contador de instrucción que indica la dirección en la RAM donde se encuentra la siguiente instrucción a ejecutar. Para ejecutarla, el procesador lee la instrucción de la posición indicada por el contador, analiza la instrucción y la realiza. El contador de programa, por defecto, se incrementa en la RAM. Sin embargo, determinadas instrucciones pueden alterar el contador, cambiando así el flujo de ejecución. Estos **"saltos"** en el programa permiten realizar repeticiones **(bucles)**  o llamar a rutinas **(funciones)**.

<img title="" src="https://images.unsplash.com/photo-1608742213509-815b97c30b36?q=80&w=1170&auto=format&fit=crop&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D" alt="Ejecución del programa" style="zoom: 40%;">

### Lenguaje de Programaci&oacute;n

Un programa, es un ejecutable. Es un conjunto de reglas para manipular la información, escritas como instrucciones de código máquinna. Estas instrucciones son my básicas y sencillas. Se codifican en un formato numérico (cada instruccion es un número) para que el procesador pueda analizarlas fácilmente. Sin embargo, utilizar directamente código máquina para escribir programas es dificil para las personas. El principal motivo es la simplicidad de las instrucciones. Como las instrucciones son my básicas, éstas distan del razonamiento humano. Una idea sencilla puede equivaler a un gran número de instrucciones máquina.p

- Terminal
- Editor de Código

## Estructura B&aacute;sica del Languaje de Programaci&oacute;n

### Mi primer hola mundo

Para crear tu primer programa en `c`.

```c

  #include <stdio.h>

  int main() {
    printf("Hola Mundo");
    return 0;
  }


```


## Concluciones

Conocer la base de programación es importante, la sintaxis, estructura, la estructura... y las muchas cosas más. Crear un programa no es complicado, vasta conseguir las instrucciones para el formato de escritura.

