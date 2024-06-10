---
layout: "../../layouts/Blog.astro"
poster: "https://imgs.search.brave.com/H118l9j4g4lb9Xp7uVMqBKgRnwNQo81a4UUxjOqHAII/rs:fit:860:0:0/g:ce/aHR0cHM6Ly9pLmVt/ZXpldGEuY29tL3dl/YmxvZy9lZGl0b3Jl/cy1wYXJhLXByb2dy/YW1hci9lZGl0b3Jl/cy1wYXJhLXByb2dy/YW1hci5qcGc"
subtitle: "Editores de Texto para programar en C"
title: "Editores para programar"
date: "marzo 19, 2024"
author: "Victoriano Juárez"
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

<div align="center">
  <img src="https://raw.githubusercontent.com/Embarcadero/Dev-Cpp/master/Source/Images/screenshot800x600.png" style="zoom:60%" />
</div>

### Dev-C++

Ir al sitio oficial de [Dev-C++](https://www.bloodshed.net/), para descargarlo solo hay que dar clic, en el boton descargar `dev-c++`.

La siguiente forma de instalar, es pormedio de `winget.run`

Buscamos `dev-c++`, elegimos el resultado que tiene el mismo nombre y copiamos el comando que se nos proporciona.

```sh

  winget install -e --id Orwell.Dev-C++


```

Automaticamente se instala, le damos permisos de administrador. Abrimos el editor.

<div align="center">
  <img src="https://ftecnologica.udistrital.edu.co/laboratorios/electricidad/sites/lab-tec-electricidad/files/imagen-principal-equipo/2023-03/Dev-C.png" style="zoom:50%" />
</div>

### Eclipse

Eclipse es una plataforma de software compuesto por un conjunto de herramientas de programación de código abierto multiplataforma para desarrollar lo que el proyecto llama "Aplicaciones de Cliente Enriquecido", opuesto a las aplicaciones "Cliente-liviano" basadas en navegadores.

Es un entorno de desarrollo integrado (IDE) aplicación de software que ayuda a los programadores a desarrollar código de software de manera eficiente.

[Eclipse | Download](https://www.eclipse.org/downloads/packages/release/2020-12/r/eclipse-ide-embedded-cc-developers)

<div align="center">
  <img src="https://miro.medium.com/v2/resize:fit:640/format:webp/1*nNTk-j2uaKhxyj3GXsYNdg.png" style="zoom:48%" />
</div>

### Visual Studio

Microsoft Visual Studio es un Entorno de Desarrollo Integrado (IDE) compatibles con varios lenguajes de programacion, en especial `C/C++`. Cuenta con extensiones para personalizarlo, una de su extension es la de error. Que marca donde y en que line esta el error en el código.

Para descargar Visual Studio, ir al sitio oficial de Microsoft y descargamos `visual studio community`, al descargar instalamos la aplicacion, aceptamos y le damos permiso de admistrador.

[Visual Studio Community](https://visualstudio.microsoft.com/es/free-developer-offers/)

<div align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/5/59/Visual_Studio_Icon_2019.svg" width="200px" />
</div>

### Visual Studio Code

Visual Studio Code es un editor de código fuente desarrollado por Microsoft para Windows, Linux, macOS y Web. Incluye soporte para la depuración, control integrado de Git, resaltado de sintaxis, finalización inteligente de código, fragmentos y refactorización de código.

Es un editor liviano, que cuenta con extensiones para personalizar. Por cada extension que se le agrega estos van consumiendo más memoria RAM.

[Visual studio code](https://code.visualstudio.com/download)
[Visual studio code Insiders](https://code.visualstudio.com/insiders/)

Visual Studio code, es muy buen editor. Puedes utilizar multiples lenguajes de programación. Es gratuito, no tienes que pagar una licencia para utilizarlo.

<img src="https://cdn-ak.f.st-hatena.com/images/fotolife/s/serip39/20200816/20200816155234.png" style="zoom:88%" />

### Neovim

Neovim es vim, con mucha personalización. Neovim es un editor de texto muy liguero. Neovim funciona con el teclado, todas sus funcionalidades, es por atajo de teclado.

Utilizar neovim ayuda mucho a la hora de escribir código, te ahorras en los clics. Como es de código abierto. Existen, muchos temas y se han desarrollado muchos plugins. Que la hacen mas accesible.

De los temas de personalizacion se encuentra astrovim, muy buen tema. Con ayuda del lenguaje de programación `lua`. Con `lua` se le puede extender las funcionalidades. Gran editor.

[Instalar neovim en windows](https://neovim.io/)

[Astrovim | awesome](https://astronvim.com/)


<img src="https://miro.medium.com/v2/resize:fit:1358/1*-IlrRDuuWJ9FpdItJUb04Q.png" style="zoom:48%" />

## Conclusion

Cada desarrollador elege que tipo de editor utilizar, dependiendo de sus necesidades. En ocasiones, los editores son personalizables, el desarrollador puede personalizar el editor de su preferencia.  Algunos editores de código son compatibles con varios lenguajes de programación, algunos verifican la sintaxis a medidad que el programador escribe, alertando inmediatamente sobre el problema de sintaxis que puede surgir.

Existen muchos editores de texto pueden ser usados para editar código fuente sin problemas, automatizar y facilitan la edición del código, "editores de código", y son editores de texto que pueden ser usados para editar código fuente.


## [Winget.run](https://winget.run/)