---
layout: ../../layouts/Blog.astro
poster: https://imgs.search.brave.com/H118l9j4g4lb9Xp7uVMqBKgRnwNQo81a4UUxjOqHAII/rs:fit:860:0:0/g:ce/aHR0cHM6Ly9pLmVt/ZXpldGEuY29tL3dl/YmxvZy9lZGl0b3Jl/cy1wYXJhLXByb2dy/YW1hci9lZGl0b3Jl/cy1wYXJhLXByb2dy/YW1hci5qcGc
subtitle: Editores de Texto para programar en C
title: Editores para programar
date: marzo 19, 2024
author: Victoriano Juárez
---

## Introduccion

Un editor de C&oacute;digo es un editor de texto diseñado espefivicamente para editar el c&oacute;digo fuente de programas Informáticos. Puede ser una aplicaci&oacute;n individual o estar incluido en un entorno de desarrollo integrado `IDE`.

Los editores de código fuente tienen características diseñadas exclusivamente para simplificar y acelerar la escritura de código fuente, como `resaltado de sintaxis`, `autocompletar` y `pareo de llaves`. Estos editores también proveen un modo conveniente de ejecutar un `compilador`, un `intérprete`, un `depurador`, o cualquier otro programa que sea relevante en el proceso de `desarrollo de software`. (Wikipedia, 2023)

## Editores para C/C++

### Embarcadero

Embarcadero es un editor de c&oacute;digo, para programar en C/C++. Tiene una interfaz interactiva para el usuario. 
Este editor es ideal para los usuarios de Windows 10 y Windows 11.

Instalar Embarcadero en windows no es muy complicado. Lo instalamos desde la terminal.

- Ir a la pagina de [winget.run](https://winget.run)
- En el buscador buscar `Embacadero`
- En la busqueda nos dara el siguiente información [Embarcadero](https://winget.run/pkg/Embarcadero/Dev-C++)
- Abrir el `mcd` o `terminal`
- Pegar el siguiente el comando que se ha copiado:

```sh

  winget install -e --id Embarcadero.Dev-C++


```

Le damos permiso de Instalación y espermos a que termine de instalar. Una vez completado abrimos y empezamos a crear los proyectos que deseamos.

Embarcadero va a resaltar el codigo C/C++ de colores, es un buen editor.

```c

  #include <stdio.h>
  int main()
  {
    printf("Hello, World!");
  }


```

### Dev-C++

Ir al sitio oficial de [Dev-C++](https://www.bloodshed.net/), para descargarlo solo hay que dar clic, en el boton descargar `dev-c++`.

Otra manera de instalar, es pormedio de `winget.run`

### Eclipse

### Visual Studio

### Visual Studio Code

### Neovim

## Conclusion

Cada desarrollador elege que tipo de editor utilizar, dependiendo de sus necesidades. En ocasiones, los editores son personalizables, el desarrollador puede personalizar el editor de su preferencia.  Algunos editores de código son compatibles con varios lenguajes de programación, algunos verifican la sintaxis a medidad que el programador escribe, alertando inmediatamente sobre el problema de sintaxis que puede surgir.

Existen muchos editores de texto pueden ser usados para editar código fuente sin problemas, automatizar y facilitan la edición del código, "editores de código", y son editores de texto que pueden ser usados para editar código fuente.


## [Winget.run](https://winget.run/)