---
layout: "../../layouts/Blog.astro"
poster: "https://wallpapercave.com/wp/wp4002982.png"
title: "Programacion en C++"
subtitle: "Conceptos Basicos del Lenguaje de Programacion C++"
date: "mayo 14, 2024"
author: "Victoriano Juárez"
---

## Introducción

### La historia de C++

C fue desarrollado por dennis ritchie en laboratorios bell mientras se desarrollaba el sistema operativo Unix
En la epoca nisiquiera habian pantallas ni teclados como los actuales, sus resultados eran impresos en hojas de papel.
(somos afortunados por la tecnologia actual)

C++ fue desarrollado por Bjarne Stroustrup, quien diseño una version de C pero con el paradigma orientado a objetos,
(Sip, c++ es orientado a objetos, recuerdalo bien ya que es una clave para entender el lenguaje)
Esto quiere decir que tiene un mayor nivel de abstracion en comparacion a C

Con C++ a diferencia de C, es posible desarrollar sin entender por completo el funcionamiento electronico de la computadora
aun asi, muchas de las caracteristicas de C++ son heradadas de C.

En los 60 y 70 recien se estaba desarrollando unix, en los 80 ya habian pantallas, sistemas operativos y lenguajes orientados a objetos


## Entorno de desarrollo

### El proceso de compilación

#### **Código fuente, código objeto y código ejecutable**

Como es de suponer, la programación consiste en escribir programas. Los programas son procedimientos que, al ejecutarse de forma secuencial, se obtienen unos resultados. 

En muchos sentidos, un programa es como una receta de cocina: una especificación secuencial de las acciones que hay que realizar para conseguir un objetivo. 

Cómode abstractas sean estas especificaciones es lo que define el nivel de abstracción de un lenguaje.

Los programas se pueden escribir directamente en código ejecutable, también llamado código binario o código máquina. Sin embargo, el nivel de abstracción tan bajo que ofrecen estos lenguajes haría imposible que muchos proyectos actuales pudieran llevarse a cabo. Este código es el que entiende la máquina donde se va a ejecutar el programa y es específico de la plataforma.

Por ejemplo, máquinas basadas en la arquitectura PC no ofrecen el mismo repertorio de instrucciones que otras basadas en la arquitectura PPC o ARM. A la dificultad de escribir código de bajo nivel se le suma la característica de no ser portable.

Por este motivo se han creado los compiladores. Estos programas traducen código fuente, programado en un lenguaje de alto nivel, en el código ejecutable para una plataforma determinada. Un paso intermedio en este proceso de compilación es la generación de código objeto, que no es sino código en lenguaje máquina al que le falta realizar el proceso de enlazado.

4 etapas del proceso de compilación son:

1. Pre-procesamiento
2. Compilación
3. Ensamblaje
4. Enrutado

#### PROCESO PARA EJECUTAR CODIGO

1. **EDITOR**: Escribir nuestro codigo en nuestro editor favorito.

   

2. **PREPROCESADOR**: Un preprocesador toma nuestro codigo fuente y este los junta en otro o varios archivos segun sea necesario para facilitar los procesos siguientes

3. **COMPILADOR**: Al igual que el preprocesador, el compilador es un programa externo a nuestro codigo fuente, que toma el/los archivos ya preprocesados y los transforma en un codigo de objetos (codigo ilegible para humanos pero mas entendible para la CPU)

4. **LINKER**: Si tu codigo fuente requiere librerias o dependencias externas, aqui se crea ese link entre las librerias y tu codigo (luego de que nuestro codigo haya sido preprocesado y compilado)

5. **LOADER**: El loader arranca la ejecucion de nuestro programa e importa las librerias que pueden ser utilizadas de forma dinamica

6. **EJECUCION**: Nuestro programa ya se encuentra en memoria ram listo enviar esos bytes a la CPU y ser procesado

![img](https://www.google.com/s2/favicons?domain=https://code.visualstudio.com//favicon.ico)[Visual Studio Code - Code Editing. Redefined](https://code.visualstudio.com/)

## Instalación en Windows

Como viste en clases anteriores el compilador es el encargado de transformar tu código fuente en un archivo ejecutable. En Windows no viene instalado el compilador de C++, por lo que nos tocará instalarlo manualmente y eso es lo que aprenderemos en esta clase 😉.

### Instalando el compilador

El compilador para C++ que usamos en Windows se llama g++, y para poder instalarlo necesitamos descargar MinGW. Este es un pequeño administrador que nos permitirá descargar el compilador de diversos lenguajes, incluyendo el de C++. Puedes descargar MinGW desde el siguiente enlace:

[MinGW - Minimalist GNU for Windows](https://sourceforge.net/projects/mingw/)

Simplemente debes darle click al botón que dice “Download”, y después de unos segundos se descargará automáticamente.

<div align="center">
  <img src="https://static.platzi.com/media/user_upload/Descarga-8166c064-064b-408f-b2e8-cb1ce2b718d6.jpg" alt="step1.png" style="zoom: 50%" />
</div>

Una vez que el instalador haya sido descargado debes abrirlo. Al hacerlo te aparecerá la siguiente ventana con información acerca del software, simplemente debes darle click al botón de “`Install`”.

![step1.png](https://static.platzi.com/media/user_upload/step1-e2470257-83e3-412f-99eb-74532af82d00.jpg)

Te pedirá que le proporciones una carpeta en la cual hacer la instalación. Por defecto viene la carpeta `C:\MinGW`, si tú lo deseas puedes cambiarla, aunque te recomiendo dejar la carpeta por defecto. En dado caso de que la cambies, debes recordar cuál carpeta elegiste, ya que la usaremos más adelante. Ahora simplemente dale click al botón “`Continue`”.

![step2.png](https://static.platzi.com/media/user_upload/step2-bd53fdc1-fdf0-4804-a8f1-7e7f313b18e8.jpg)

Verás la siguiente pantalla, esto empezará a descargar el administrador de instalación de MinGW, simplemente debes esperar a que termine y al final hacer click en el botón “`Continue`”.

![step3.png](https://static.platzi.com/media/user_upload/step3-d896b6be-b77e-4e48-994b-ea6c77ae0529.jpg)

A continuación verás la siguiente pantalla… ¡No te asustes! Este es un administrador que nos permite instalar compiladores para diferentes lenguajes. En este caso queremos instalar el compilador para C++ así que elegimos la opción “`mingw32-gcc-g++`”. Al darle click verás que sale un menú, ahí dale click a la opción que dice “Mark for Installation”.

Puedes asegurarte de que este es el compilador de C++, ya que en el apartado “Description” verás que dice “The GNU C++ Compiler” (el compilador GNU de C++).

<div align="center">

<img src="https://static.platzi.com/media/user_upload/step4-67f87c0a-b29e-4d4c-9307-c3f5f6a7be72.jpg" alt="step4.png" style="zoom: 60%" />
</div>

Una vez seleccionado, te vas a la pestaña “`Installation`” ubicada en la esquina superior izquierda y seleccionas la opción “`Apply Changes`”.
<div align="center">
  <img src="https://static.platzi.com/media/user_upload/step5-3ded389e-5245-4476-92ad-84bb8513e9eb.jpg" alt="step5.png" style="zoom: 60%" />
</div>

Se te abrirá esta ventana emergente pidiéndote confirmación de los cambios, simplemente dale click al botón que dice “`Apply`” y el administrador empezará a descargar e instalar el compilador para C++.

![atep6.png](https://static.platzi.com/media/user_upload/atep6-ab46aac9-a032-4d97-8281-b832ec6c60ec.jpg)
<div align="center">
  <img src="https://static.platzi.com/media/user_upload/step7-375fe7e6-f18a-41e3-96d4-df9c0f5416cd.jpg" alt="step7.png" style="zoom: 60%" />
</div>

¡Cuando termine de instalarse te saldrá este mensaje que te dice que la instalación terminó correctamente! Dale click al botón que dice “`Close`” y ya puedes cerrar el administrador de MinGW.

<img src="https://static.platzi.com/media/user_upload/step8-24889047-cea6-4642-994e-64f3258f1670.jpg" alt="step8.png" style="zoom: 60%" />

¡Ya tenemos el compilador de C++ instalado! Con esto estamos casi listos para trabajar, sin embargo, nos falta un paso muy importante.

### Agregando el compilador al PATH de Windows

Más adelante estaremos haciendo uso de una extensión que nos ayudará a correr nuestros programas escritos en C++, pero esta extensión necesita que el compilador esté agregado al PATH de Windows.

Este PATH es básicamente una variable que existe en nuestro sistema operativo que contiene una lista de rutas que apuntan a diferentes carpetas donde pueden encontrarse algunos programas importantes, y es aquí donde agregaremos a nuestro compilador.

Para ello nos vamos al buscador de Windows y escribimos “Variables de entorno”. En los resultados seleccionamos la opción que dice “Editar variables de entorno del sistema”.

![step 9.png](https://static.platzi.com/media/user_upload/step%209-c35d15ea-dbf5-4fd0-a826-b9e8e833d155.jpg)

Se te abrirá esta ventanita, aquí simplemente debes darle click al botón que dice “`Variables de entorno...`”.

![step10.png](https://static.platzi.com/media/user_upload/step10-bd29d7a5-7513-4793-bb43-2dcefc73c67d.jpg)

Se te abrirá esta otra ventanita, aquí debes buscar la variable llamada `Path` dentro de la sección que dice “Variables del sistema”. Si no la ves a primera vista puede que este ubicada mucho más abajo. Una vez la encuentres seleccionala y dale click al botón que dice “`Editar`”.

![step11.png](https://static.platzi.com/media/user_upload/step11-50bf1ea6-10de-4ff9-bf18-843f1f5b9ff1.jpg)

Se abrirá está ventana, esta es la lista de rutas hacia los programas importantes que contiene la variable. Aquí es donde añadiremos a nuestro compilador, y para ello debes darle click al botón que dice “`Nuevo`”.

![step12.png](https://static.platzi.com/media/user_upload/step12-5ad9e499-4cb5-496e-8d12-2eac3e50de4c.jpg)

Verás que se agregará un nuevo campo donde podrás escribir una nueva ruta, aquí escribiremos la ruta “`C:\MinGW\bin`”. Esta es la ruta que dejamos por defecto cuando instalamos MinGW, si tú la cambiaste entonces deberás escribir la ruta en donde guardaste el compilador. Cuando ya tengas tu ruta escrita dale click al botón que dice “`Aceptar`” en todas las ventanas que tengas abiertas.

![step13.png](https://static.platzi.com/media/user_upload/step13-18368479-ee42-4b6f-9cd4-d8f9b14b726c.jpg)

¡Con eso ya deberías tener tu compilador agregado en el PATH de Windows! Y podemos comprobarlo, para ello ve al buscador de Windows, escribe “CMD” y dale click a la opción que dice “Símbolo del sistema”.

![step14.png](https://static.platzi.com/media/user_upload/step14-8d04191b-672f-41ab-9dde-65f65eadc7b8.jpg)

Se te abrirá esta ventanita, aquí debes escribir el comando `g++ --version`. Si te sale este mensaje significa que tu compilador está instalado correctamente y que se agregó correctamente al PATH de Windows.

<img src="https://static.platzi.com/media/user_upload/step15-e9af3022-3ce5-428a-85fa-8da55b90439e.jpg" alt="step15.png" style="zoom: 60%"/>

### Problemas comunes

Si por alguna razón no te sale este mensaje puede deberse a varios factores. En primera instancia, te recomiendo reiniciar tu computadora, ya que a veces los cambios a la variable PATH suelen tomar efecto luego de un reinicio.

Si aun así no te funciona, revisa bien que hayas escrito correctamente la ruta dentro de tu variable PATH, y también revisa que dicha ruta exista, y que dentro de esa ruta exista un archivo llamado `g++.exe`. Si por alguna razón no encuentras la ruta o el archivo te recomiendo reinstalar el compilador y dejar la carpeta por defecto.

Ahora que ya tienes el compilador de C++ instalado nos vamos a la siguiente clase donde aprenderemos a cómo instalar este mismo compilador en Linux 😄.

## Instalación en Linux

A diferencia de Windows, el compilador de C++ viene instalado normalmente por defecto en la mayoría de sistemas operativos Linux.

Para verificar que tenemos instalado el compilador podemos ejecutar en la terminal el comando:

```
gcc -v 
```

En caso de que no te mostrara un resultado significa que no lo tienes instalado. Instalar el compilador es bastante sencillo, los comandos varían dependiendo el sistema operativo tengas instalado.

- **Ubuntu**

```bash

  sudo apt-get install g++


```

- **Fedora/RHEL**

```bash

  sudo dnf install gcc-c++


```

### Extensiones para Visual Studio Code

Para tener nuestro entorno de desarrollo completamente listo, solo debemos instalar dos extensiones para nuestro editor Visual Studio Code.

### C/C++

Esta extensión nos otorgará muchas utilidades para poder programar en C++ como reconocimiento de sintaxis y alerta de errores.

<img src="https://static.platzi.com/media/user_upload/image2-2cbb2179-9d57-4c3a-bfb3-2b8004932484.jpg" alt="image1.png" style="zoom: 60%"/>

### C/C++ Compile Run

Con esta extensión podremos compilar y ejecutar nuestros programas de C++ con tan solo presionar la tecla F6.

<img src="https://static.platzi.com/media/user_upload/image1-8969e4d1-2d16-421c-a0fa-b8cb0d2487b7.jpg" alt="image1.png" style="zoom: 50%"/>

¡Genial! Ya tienes todo lo necesario para empezar a programar en este lenguaje. Nos vemos en la siguiente clase.

>  Neovim con coc.nvim installar [coc-clangd](https://github.com/clangd/coc-clangd) para obtener autocompletado y otras funciones de IDE en Neovim.
>
>  Instalar :
>
> ```bash
> sudo apt-get install build-essential
> ```

## Instalación en macOS

Como viste en clases anteriores, el compilador es el encargado de transformar tu código fuente en un archivo ejecutable. El compilador de C++ viene por defecto si ya hemos instalado las **xcode command line tools**, las herramientas de desarrollo de software de Apple.

Si ejecutamos el comando `g++ --version` en nuestra terminal debería imprimirnos el siguiente mensaje:

<img src="https://static.platzi.com/media/user_upload/image1-dcf36d2f-b941-4373-a9fd-37dd4801b391.jpg" alt="image1.png" style="zoom: 40%"/>

Si es así, puedes continuar instalando las extensiones de C++ en **VSCode**. De lo contrario, debemos instalar las **xcode command line tools**. Para ello debemos ejecutar el siguiente comando:

```
xcode-select --install
```

Te aparecerá un cuadro de diálogo al que debemos dar clic en instalar:

<img src="https://static.platzi.com/media/user_upload/image2-378891d8-3569-4062-a773-138f70ad411b.jpg" alt="image1.png" style="zoom: 40%"/>

Notas:

- Si no te aparece un cuadro de diálogo y se empieza a descargar en la terminal, no te alarmes, es normal. Se debe a la versión de macOS que manejas.
- La duración de la instalación varía dependiendo de tu conexión a internet y el procesador de tu equipo.

Una vez terminada la instalación, ejecutamos nuevamente el comando `xcode-select --install` en nuestra terminal y nos debería imprimir el siguiente mensaje:

<img src="https://static.platzi.com/media/user_upload/image3-b2bce202-6124-4be1-84ab-087e0e380c99.jpg" alt="image1.png" style="zoom: 40%"/>

Ya estamos listas para instalar nuestras extensiones.

## Extensiones para Visual Studio Code

Para tener nuestro entorno de desarrollo completamente listo, solo debemos instalar dos extensiones para nuestro editor Visual Studio Code.

**C/C++**

Esta extensión nos otorgará muchas utilidades para poder programar en C++ como reconocimiento de sintaxis y alerta de errores.

<img src="https://static.platzi.com/media/user_upload/image5-562288e4-931d-4068-b3ae-1a090d3da461.jpg" alt="image1.png" style="zoom: 40%"/>

**C/C++ Compile Run**

Con esta extensión podremos compilar y ejecutar nuestros programas de C++ con tan solo presionar las teclas `CMD + R`.

<img src="https://static.platzi.com/media/user_upload/image4-4cf89aa9-c7c5-4f8f-8d6f-ff8851815353.jpg" alt="image1.png" style="zoom: 40%"/>

¡Genial! Ya tienes todo lo necesario para empezar a programar en este lenguaje. Nos vemos en la siguiente clase.


## Estructura básica de un programa en C++


La librería `iostream`, te permite recibir datos de entrada o mostrar datos de salida.

`using namespace std`, te permite utilizar, en el código, nombres estandar de c++, para poder importarlas sin necesidad de escribir desde donde la estamos importando

La función `main`, es la funcion principal de nuestro código. **Es lo primero que ejecuta el programa**

Para mostrar en pantalla, utilzar `cout << "Un texto"`.
`cout` te permite mostrar en pantalla.

> namespace, y por que aveces es mala practica usar
>
> ```cpp
> using namespace std
> ```

Compilar el archivo `main.cpp` desde la terminal

```bash

  g++ -o ejecutable holaMundo.cpp


```

El comando que compila al programa esta compuesto de [4 elementos:](https://hetpro-store.com/TUTORIALES/compilar-cpp-g-linux-en-terminal-leccion-1/)

- `g++` es el programa compilador.
- `-o` es una banderá que le indica al compilador que el siguiente elemento es el archivo ejecutable y como se llamara.
- `ejecutable` es el nombre del archivo que se ejecutara.
- `holaMundo.cpp` es el nombre del código fuente.

**Código**:

```cpp

  #include <iostream>

  using namespace std;

  int main() { 
    cout << "Hello World"; 
    return 0;
  }

```


`\#include <iostream>`

```c++

  // include es una peticion a una libreria externa para nuestro codigo
  // iostream permite recibir y mostrar datos (iostream = Input/OutPut stream)


```

`using namespace std;`

```c++

  // namespace genera un scope, es decir, aisla ciertas funciones y variables
  // 'std' es un namespace, es decir que dentro de si tiene funciones y variables


```

`int main()`

```c++

  // int sirve para declarar variables y funciones
  int main(){
      // cout es una funcion del namespace 'std'
      cout << "Hello World" << endl;
      cout << "Bye World" << endl;
      // endl es una funcion del namespace 'std'
  }


```

### Tipos de datos

- **Bool (Boolean):**
  - Valor logico
  - Puede ser Verdadero o Falso
  - Tamaño de 4 bytes
- **Int (Integer):**
  - Numero enteros
  - Tamaño: 4 Bytes
- **Float:**
  - Numeros de decimales (punto flotante)
  - Tamaño: 4 bytes
- **Double:**
  - Numeros de punto flotante de doble precision
  - Tamaño: 8 bytes (4+4 = doble flotante)
- **Char (Character):**
  - Caracter (ASCII)
  - Muestra el caracter o su numero en ASCII
  - Tamaño: 4 bytes

**También tenemos:**

- Short Int
- Unsign Int
- Long Double

**Nota:** Seria bueno **investigar los rangos de cada tipo de dato**. No lo mencionan a fondo en la clase, pero es bueno saberlo. Más bien, acá dejare una tablita:

![TiposDeDatosCPlusPlus.png](https://static.platzi.com/media/user_upload/TiposDeDatosCPlusPlus-359a8627-9a72-4d6e-a186-bfcdc8c24984.jpg)

> C++ es un lenguaje tipado, es necesario especificar que tipo de datos tienen nuestras variables o funciones.

```c++

  #include <iostream>
  using std::cout;
  using std::endl;

  int main(){
      int boolean = true;
      cout << boolean << endl;

      int number1 = 3 / 2;
      cout << number1 << endl;

      float number2 = 2.5;
      cout << number2 << endl;

      double number3 = 2.53;
      cout << number3 << endl;

      char letra = 'a';
      cout << letra << endl;

      cout << "Hello World" << endl;
      cout << "Bye World" << endl;
  }


```

**Código que imprime las letras en mayúsculas con su número de la tabla ASCIII**

```shell

  #include <iostream>

  using namespace std;

  int main(int argc, char const *argv[])
  {
      int inicio = 65;
      int limite = 90;
      
      for (int i = inicio; i <= limite; i++)
      {
        cout <<" | Caracter: " << (char) i << " Número ASCII: " << i << "| ";
        if( i % 2 == 0){
              cout << endl;
          }   
      }
      return 0;
  }


```

**Salida:**
```shell


  > | Caracter: A Número ASCII: 65| | Caracter: B Número ASCII: 66|

  > | Caracter: C Número ASCII: 67| | Caracter: D Número ASCII: 68|

  > | Caracter: E Número ASCII: 69| | Caracter: F Número ASCII: 70|

  > | Caracter: G Número ASCII: 71| | Caracter: H Número ASCII: 72|

  > | Caracter: I Número ASCII: 73| | Caracter: J Número ASCII: 74|

  > | Caracter: K Número ASCII: 75| | Caracter: L Número ASCII: 76|

  > | Caracter: M Número ASCII: 77| | Caracter: N Número ASCII: 78|

  > | Caracter: O Número ASCII: 79| | Caracter: P Número ASCII: 80|

  > | Caracter: Q Número ASCII: 81| | Caracter: R Número ASCII: 82|

  > | Caracter: S Número ASCII: 83| | Caracter: T Número ASCII: 84|

  > | Caracter: U Número ASCII: 85| | Caracter: V Número ASCII: 86|

  > | Caracter: W Número ASCII: 87| | Caracter: X Número ASCII: 88|

  > | Caracter: Y Número ASCII: 89| | Caracter: Z Número ASCII: 90|


```

## Variables

### ¿Cómo crear variables?

```cpp

  tipoDeVariable nombreVariable = valorInicial
  // Ejemplo: 
  int number = 0;


```

Las variables no pueden:

- Empezar con caracter especial
- Un numero
- No tienen espacio
- Reasignar valores a la variable.

**Y recuerden inicializar**

**Código** 😃

```cpp

  #include <iostream>

  using namespace std;

  int main() {
    int age = 14;
    age = age + 1;
    cout << age;
  }


```

## Constantes y listas

**Código:**

```c++


  #include <iostream>

  using namespace std;

  int main() {

      // Se imprime el Hola Mundo
      cout << "Hola Mundo \n";

      //Variables enteras
      int edad = 0;       //Se declara una variable indicando el tipo, nombre y valor inicial 
      cout << "El valor inicial de la edad es: " << edad << endl;
      edad = 18;      //Se cambia el valor de la variable 
      cout << "El valor final de la edad es: " << edad << endl;
      
      //Constantes
      const char letra = 'A';     //Se declara con la palabra const, no se puede cambiar
      cout << "El valor de la letra es "<< letra << endl;

      //Listas 
      int lista_edades[] = { 18, 24, 16 };    //Se indica que es una lista con [] y entre {} van los valores separados por comas
      cout << "El valor de la edad 1 es: " << lista_edades[1] << endl;    //Se usan índices que empiezan en 0 
      lista_edades[1] = 26;       //Se modifica el valor
      cout << "El  nuevo valor de la edad 1 es: " << lista_edades[1] << endl;

  }


```

`main.cpp`

```c++


  #include <iostream> 
  using namespace std; int main() {       
    int edad = 0;    
    edad = 18;    
    const char letra = 'A';    
    int lista_edades[] = {18,24,16};    
    lista_edades[1] = 26;    
    cout << edad << endl;    
    cout << letra << endl;    
    cout << lista_edades[1]; 
  }


```

## Operadores

operadores:

```c++


  // asignación 
  (=,*=)

  //lógicos 
  (&&,||,!=) 

  // aritmético 
  (%)

  // sizeof()
  // cumple la misma funcion que
  sizeof(lista)
  sizeof(lista[0]) 
    
  // pero este solo funciona en una lista de carateres
    strlen(lista)
    
  // Es solo para una lista de nuemros
  sizeof(lista)/sizeof(lista[0])


```

> `sizeof()` si es una función. Dicha función retorna el tamaño que ocupa en memoria un tipo de dato.

**Código con lo visto en clase y unos operadores más.**

```c++

  #include <iostream>

  using namespace std;

  int main() {

      //Se declaran las variables como 2 enteros
      int n1 = 2;
      int n2 = 3;

      cout << "El primer valor es " << n1 << endl;
      cout << "El segundo valor es " << n2 << endl;

      //Operadores aritméticos
      //cout << n1 + n2 << endl;    Se puede hacer la suma en cout   
      int r1 = n1 + n2;
      cout << "La suma de las variables da como resultado " << r1 << endl;

      r1 = n1 * n2;
      cout << "La multiplicación de las variables da como resultado " << r1 << endl;

      r1 = n1 - n2;
      cout << "La resta de las variables da como resultado " << r1 << endl;

      //Operadores de comparación
      bool r2 = n1 < n2;
      cout <<"¿Es "<< n1 <<" < " << n2 << " ? La respuesta da "<< r2 << endl;

      r2 = n1 > n2;
      cout <<"¿Es "<< n1 <<" > " << n2 << " ? La respuesta da "<< r2 << endl;
      
      r2 = n1 == n2;
      cout <<"¿Es "<< n1 <<" igual a " << n2 << " ? La respuesta da "<< r2 << endl;

      //Operadores de asignación
      n1 += 1;
      cout <<"El nuevo valor de n1 es "<< n1 << endl;

      //sizeof() nos permite obtener el tamaño en bytes de un dato
      cout << "La variable n1 ocupa " << sizeof(n1) << " bytes de tamaño"<< endl;

      //Calcular cuántos elementos tiene una lista
      int edades[] = {24, 40, 7};
      int n_elementos = sizeof(edades) / sizeof(edades[0]);
      cout << "La lista edades tiene " <<n_elementos << " elementos " << endl;

  }


```

### Entrada y salida de datos

#### La libreria iostream

Su nombre completo es **Input/Output Stream** y su función es manejar el flujo de entrada-salida de datos.

#### `cout` 🤝 `cin`:

- `cout`: Flujo de salida, usada para imprimir datos en la pantalla.
- `cin`: Flujo de entrada, usada para ingresar datos al programa, una de las tantas maneras de hacerlo es con el teclado.

### Operadores de direccionamiento

Son los encargador de comunicar la o las fuentes de información (Por ejemplo, una variable o constante) con el objeto, en este caso, cout o cin. Los operadores de direccionamiento esta conformado por el signo de mayor (>), que sería para la entrada de datos y el signo de menor que (<), para la salida de datos.

```cpp

  int main() {

    int edad = 0;

    cout << "Edad: ";

    cin >> edad;

    cout << "Tu edad es: " << edad << endl;
    
  }


```

### ¿Qué son los Secuencias de Escape?

Las secuencias de escape se utilizan para definir ciertos caracteres especiales dentro de cadenas de texto.

Ahora dejare una tabla con algunas de ellas:

![Captura de pantalla_2021-08-04_12-06-15.png](https://static.platzi.com/media/user_upload/Captura%20de%20pantalla_2021-08-04_12-06-15-5c1b43b9-b9ac-42b2-81e3-927380803a63.jpg)

![Captura de pantalla_2021-08-04_12-06-41.png](https://static.platzi.com/media/user_upload/Captura%20de%20pantalla_2021-08-04_12-06-41-ec4bf6af-65e4-45eb-8fc4-0812225a0f9d.jpg)

## Control de flujo

### El condicional if

Es muy útil para saber el posible resultado.

![Tabla de verdad](https://ecomputernotes.com/images/Truth-table-for-OR-AND-and-NOT-operations.jpg)

La bella tabla de Verdad. Muy util para quienes estan empezando ❤️ .

```c++

  1 = Verdadero
  0 = Falso


```

Reto de la clase:

```c++

  #include <iostream>
  using namespace std;
  // int variable.
  int age;

  int main() {
      // The program asks for the user's age.
      cout << "Please, enter your age: ";
      // User's age is saved in the variable.
      cin >> age;

      /* If the user's age is less than 18,
          he can't vote or if the user's age is
          greater than 40, he can't vote neither. */
      if ( age < 18 || age > 40) {
          cout << "You can't vote" << endl;
      }
      else {
          cout << "You can vote!" << endl;    
      }     
  }


```

## El condicional switch

**Código:**

```cpp

  #include <iostream>

  using namespace std;

  int main() {
    int option;
    cout << "Enter one number from 0-2." << endl;
    cin >> option;
    switch (option) {
    case 1:
      cout << "You select option one." << endl;
      break;
    case 2:
      cout << "You select option two." << endl;
      break;
    default:
      cout << "Incorrect." << endl;
      break;
    }
  }


```

**Codigo:**

```cpp

  #include <iostream>

  using namespace std;

  int main() {

    int option = 0;
    cout << "Introduce una opcion: ";
    cin >> option;
    switch (option)
    {
      case 1:
        cout << "Option 1: ";
        break;
      case 2:
        cout << "Option 2: ";
        break;
      default:
        cout << "Esto no existe" << endl;
        break;
    }
  }

```

## Ciclo for

**obtner numeros**

```cpp

  #include<iostream>
  using namespace std;
  int main (){
  int lista[]={};
  //int limite=sizeof(lista)/sizeof(lista[0]);
  int limite;
  cout<<"hasta que numero quiere llegar: "<<endl;
  cin>>limite;
  cout<<“los numeros son los cigientes”<<endl;
  for (int i =0;i<limite;i+=2){
  cout<<i<<endl;
  }

  return 0 ;  
  }


```

**Reto de la clase:**

```c++

  #include <iostream>
  using namespace std;

  // This list contains the numbers from 1 to 100.
  int numbers[] = { 
  1,     2,	3,	4,	5,	6,	7,	8,	9,	10,
  11,	12,	13,	14,	15,	16,	17,	18,	19,	20,
  21,	22,	23,	24,	25,	26,	27,	28,	29,	30,
  31,	32,	33,	34,	35,	36,	37,	38,	39,	40,
  41,	42,	43,	44,	45,	46,	47,     48,	49,	50,
  51,	52,	53,	54,	55,	56,	57,	58,	59,	60,
  61,	62,	63,	64,	65,	66,	67,	68,	69,	70,
  71,	72,	73,	74,	75,	76,	77,	78,	79,	80,
  81,	82,	83,	84,	85,	86,	87,	88,	89,	90,
  91,	92,	93,	94,	95,	96,	97,	98,	99,	100 };
  // Get list's elements.
  int limite = sizeof(numbers) / sizeof(numbers[0]);

  int main () {

      // for loop to through list and get list's elements.
      for (int i = 0; i < limite; i++) {

          // if conditional to only display even numbers.
          if (numbers[i] % 2 == !0) 
          {
              continue;
          }
          cout << numbers[i] << endl;
          
      }
      
  }

```

**código** 😃

- Parte Uno:

```cpp

  #include <iostream>

  using namespace std;

  int main() {
    int limit;
    cout << "Enter the max number: ";
    cin >> limit;
    for (int i = 0; i <= limit; i++) {
      cout << i << endl;
    }
  }


```

- Parte Dos:

```cpp

#include <iostream>

using namespace std;

  int main() {
    int list[] = {1, 20, 25};
    int limit = sizeof(list) / sizeof(list[0]);
    for (int i = 0; i < limit; i++) {
      cout << list[i] << endl;
    }
  }
```

- Programa para ingresar un limite de numeros:

```cpp

  #include <iostream>

  using namespace std;

  int main() {
    int limit;
    cout << "Enter the max number: ";
    cin >> limit;

    for (int i = 1; i < limit; i++) {
      if (i % 2 == 0) {
        cout << i << endl;
      }
    }
  }


```

> Otra solución es simplemente hacer que el siclo itere de dos en dos 😂, es decir cambiar el “i++” por “i += 2” así solo se mostraran números pares entre el 0 y la cantidad pedida por el usuario…

## Ciclos while y do-while

Código que se ejecuta por la eternidad hasta que el usuario quiera salir, no importa si usa mayúsculas o minúsculas.

```cpp

    char respuesta;
    for(;;){
        cout << "¿Deseas terminar?[Y/N]: ";
        cin >> respuesta;
        if (respuesta == 'Y' || respuesta == 'y'){
            cout << "Bye bye \n";
            break;
        }else if(respuesta == 'N' || respuesta == 'n'){
            cout << "Continuamos \n";
        }else{
            cout << "Respuesta inválida \n";
        }
    }


```

**do-while:**

```cpp

  do {
  <<codigo>>
  } while (respuesta != ‘y’);


```

**Los ciclos (o bucles) while y do while:**

```cpp

  #include<iostream>
  using namespace std;

  int main(){
      int limite = 0;
      int contador = 0;
      bool ciclo = true;
      cout<< endl;

      while (ciclo)
      {
          cout<< "¿Que siga el ciclo While? (1 = No, 0 = Si)";
          cin>> limite;

          contador +=1;
          cout<< contador <<endl;

          if(limite == 0){
              break;
          }
      }

      contador = 0;
      do
      {
          cout<< "¿Que siga el ciclo Do While? (1 = No, 0 = Si)";
          cin>> limite;

          contador +=1;
          cout<< contador <<endl;

          if(limite == 0){
              ciclo = false;
          }
      } while (ciclo);
  }


```

## Funciones

### Qué son las funciones

código:

```cpp

  #include <iostream>

  using namespace std;

  int sum(int x, int y = 2) { return x + y; }
  int res(int x, int y = 2) { return x - y; }
  int mul(int x, int y = 2) { return x * y; }

  int main() {
    cout << sum(3, 3) << endl;
    cout << res(3, 3) << endl;
    cout << mul(3, 3) << endl;
  }


```

funciones pueden declararce de dos maneras :

– Retorne un valor :

código:

```cpp

  int nombre_funcion(variables){

  return variable que tu quieras;
  }
  float nombre_funcion(variables){

  return variable que tu quieras;
  }
  char nombre_funcion(variables){

  return variable que tu quieras;
  }

  //devuelve varios valores
  void(int &variable float &variable2){
  }


```

> Función tipo `“void”` no devuelve nada, lo que haces es pasar por referencia los argumentos, quiere decir que pasas la dirección en memoria donde se encuentran los datos que vas a modificar. Entonces cuando haces la modificación en ese espacio de memoria, se ven afectados los variables que pasas por referencia a la función.

## La biblioteca estandar de C++

#### **iostream:**

`Input/Output` (entrada/salida) de datos.

```c

  cin >> variable;
  cout << variable;


```

#### **string:**

Manejo de cadenas de texto.

```cpp

  string str ("Hola a todos!");
  str.pop_back(); // Borra el último carácter de la string


```

#### **cmath:**

Funciones matemáticas comunes como la potencia `base^(exponente)` en c++:

```cpp
pow(base, exponente);
```

#### **exception:**

Utilidades para el manejo de errores.

```cpp

  function<int(int,int)> bar;

  try {
    cout << bar(10,20) << '\n';
  }
  catch (bad_function_call& e) // captura la excepción
  {
    cout << "ERROR: Esa función está vacía.\n";
  }


```

#### **array:**

Manejo de arreglos de datos (matrices de tamaño fijo).

```cpp

  array<int, 0> my_array;   
  my_array.empty(); // pregunta si el arreglo está vacío


```

#### **vector:**

Manejo de vectores de datos (representan matrices que pueden cambiar de tamaño).

```cpp

  vector<int> my_vector;
  my_vector.push_back (myint); // Agrega un nuevo elemento al final del vector


```

> biblioteca 
>
> `conio.h` para poder usar la función `getch()` para evitar que el ejecutable se cierre O también `stdlib.h` para usar el `system("cls")` para limpiar consola, también `system("pause")` que funciona como el `getch().`

código:

```cpp

  #include <iostream>
  #include <string>

  using namespace std;

  int main() {
    string text = "Hello World";
    cout << text << endl;
    cout << text.size() << endl;
  }


```