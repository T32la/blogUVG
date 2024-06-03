---
layout: "../../layouts/Blog.astro"
poster: "https://images.unsplash.com/photo-1642952469120-eed4b65104be?q=80&w=2070&auto=format&fit=crop&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D"
title: "Proyecto Final Algoritmos"
subtitle: "Sitema para la Gestion de Biblioteca"
date: "mayo 21, 2024"
author: "Victoriano Juárez"
---

## Descripción

Proyecto final del curso de algoritmos y Programación. Es crear una sistema de Gestion de Biblioteca, que cumpla con las siguientes funcionalidades:

1. Registrar un libro.
2. Buscar y listar libros.
3. Buscar y actualizar libro, titulo y status.
4. Listar libros.
5. Detalles de los desarrolladores.
6. Cierre de sesion.

El programa debe de construirse con el lenguage de programacion C++. A 32 bits, para el sistema operativo windows 10. Con programación básica, utilizando las variables, `int`, `float`, `string`... utilizando `struct`, `vectores`, solo para terminal. El desarrollo del programa fue de la mano de un equipo de 5 personas. Vamos al código:

## Descripción y Estructura de la librería `libros.h`

La directiva `#ifndef` junto con `#define` y `#endif` se utiliza para evitar la inclusión múltiple de un archivo de encabezado en C++. 
Esto se conoce como guardas de inclusión.

```cpp

  #ifndef LIBROS_H
  #define LIBROS_H

  #endif 

```

### ¿Cómo funcionan las guardas de inclusión?

**`#ifndef LIBROS_H`:** Verifica si `LIBROS_H` no está definido. Si no está definido, el compilador procede a la siguiente línea. Si ya está definido, el compilador salta todo el contenido hasta el `#endif`.

**`#define LIBROS_H`:** Define `LIBROS_H` para indicar que este archivo de encabezado ya ha sido incluido.
Contenido del encabezado: Contiene las declaraciones de las funciones, estructuras,
y cualquier otro contenido que se quiera incluir solo una vez.

**`#endif`:** Marca el final del bloque condicional iniciado por `#ifndef`.

#### Beneficios

**Evita definiciones múltiples:** Si un archivo de encabezado es incluido más de una vez en diferentes partes del programa, las guardas de inclusión aseguran que su contenido solo se incluya una vez, evitando errores de redefinición.

**Mejora la eficiencia:** Reduce la cantidad de código que el compilador debe procesar, lo que puede hacer que la compilación sea más rápida.

### Librerías 

`using namespace std` se declara para utilizar `cout` y `cin`.

```cpp

  #include <string>
  #include <vector>

  using namespace std;


```

### `Struct` de Libros para el formulario

```cpp

struct Libro {
    string titulo;
    string autor;
    string genero;
    int anio_publicacion;
    string estatus;
};

```
### Declaración de Funciones 

```cpp

  void mostrar(const vector<Libro>& libros);
  void ingresarLibros(vector<Libro>& libros);
  void buscarLibro(const vector<Libro>& libros);
  void actualizarInformacion(vector<Libro>& libros);
  void descripcion();
  void pausa();
  void menu(vector<Libro>& libros);


```

La expresión `const vector<Libro>& libros` es una declaración de un parámetro de una función en C++. Desglose para entender cada parte:

`const`: Esto indica que los objetos en el vector no pueden ser modificados. La función no tiene permitido cambiar los elementos del `vector`.

`vector<Libro>`: Esto declara un vector que almacena objetos de tipo Libro. Un vector es una colección dinámica en C++ que puede cambiar de tamaño automáticamente y proporciona acceso secuencial a sus elementos.

`&`: Esto significa que el vector es pasado por referencia. Pasar por referencia permite que la función acceda directamente al vector original, sin crear una copia del mismo. Esto es más eficiente en términos de memoria y tiempo, especialmente para colecciones grandes.

`libros`: Este es el nombre del parámetro, que será utilizado dentro de la función para referirse al vector de Libro que se le pasa a la función.

En conjunto, `const vector<Libro>& libros` declara un parámetro que es una referencia constante a un vector de objetos Libro. Esto significa que la función que recibe este parámetro puede leer los elementos del vector, pero no puede modificar ni los elementos del vector ni el vector mismo.

###  Librería `libros.h`
El código es se encuentra en el archivo de librería `libros.h`

```cpp

  #ifndef LIBROS_H
  #define LIBROS_H

  #include <string>
  #include <vector>

  using namespace std;

  struct Libro {
      string titulo;
      string autor;
      string genero;
      int anio_publicacion;
      string estatus;
  };

  void mostrar(const vector<Libro>& libros);
  void ingresarLibros(vector<Libro>& libros);
  void buscarLibro(const vector<Libro>& libros);
  void actualizarInformacion(vector<Libro>& libros);
  void descripcion();
  void pausa();
  void menu(vector<Libro>& libros);

  #endif // LIBROS_H


```

##  Estructura y Descripción de `main.cpp`

### Librerías

```cpp

  #include <iostream>
  #include <string>
  #include <vector>
  #include "libros.h"

  using namespace std;

```
 
### Variables Globales

```cpp

  // Variables Globales
  string h = "\t";  // Tabulador horizontal
  string v = "\v";  // Tabulador Vertical

```

## Funciones

### `mostrar()`

La función `mostrar()` no retorna algún valor. Su función es recorre con un `for` el `vector<libro> libros`. Al recorrer, muestre los datos de los libros.
```cpp

  void mostrar(const vector<Libro>& libros) {
      for (int i = 0; i < libros.size(); i++) {
          cout << endl << h << i << ". " << libros[i].titulo << h
              << libros[i].autor << h << libros[i].genero << h << libros[i].anio_publicacion << h << libros[i].estatus << endl;
      }
  }

```

### `ingresarLibros()`

La función `ingresarLibros()` no retorna datos, es el formulario para ingresar los libros al Sistema de Gestión de Biblioteca. Al principio, pregunta por el número de libros a ingresar. Con un `for` recorremos el formulario. Obtenemos los datos con `getline(cin, libro.titulo)` para ingresar la información que se requiere. Con `push_back();` enviamos los datos al `vector<Libro> libros`.

```cpp

  void ingresarLibros(vector<Libro>& libros) {
    int num;
    cout << h << "Ingresar libros" << endl;
    cout << h << "¿Cuantos libros deseas ingresar?: ";
    cin >> num;
    cin.ignore();
    for (int i = 1; i <= num; i++) {
        Libro libro;
        cout << h << "Ingresa el Titulo del Libro: ";
        getline(cin, libro.titulo);
        cout << h << "Ingresa el Nombre del Autor: ";
        getline(cin, libro.autor);
        cout << h << "Ingresa el Genero del Libro: ";
        getline(cin, libro.genero);
        cout << h << "Ingresa el Anio de Publicacion del Libro: ";
        cin >> libro.anio_publicacion;
        cin.ignore();
        cout << h << "Ingresa el estatus del Libro: ";
        getline(cin, libro.estatus);
        libros.push_back(libro);
    }
    pausa();
  }

```

### `buscarLibro()` 

La función `buscarLibro()` se encarga de buscar los libros por `titulo` y `genero`. Cuenta con un validador, cuando se ingresa por teclado un dato diferente nuestra el mensaje `Opcion no valida`. Además, cuenta con un formulario de retorno, continuar con la búsqueda `si/no`. Según, la opción que seleccionada se ejecutara.

```cpp

  void buscarLibro(const vector<Libro>& libros) {
      string buscar, op_buscar;
      cout << "Buscar libro: " << endl;
      while (true) {
          cout << endl << h << "¿Buscar por titulo o por genero? (titulo | genero): " << endl;
          cout << h; cin >> op_buscar;
          cin.ignore();
          if (op_buscar == "titulo") {
              cout << h << "Ingrese el titulo del libro: ";
              cout << h; getline(cin, buscar);
              for (const auto& libro : libros) {
                  if (libro.titulo == buscar) {
                      cout << h << libro.titulo << h << libro.autor << h << libro.genero << h << libro.anio_publicacion << h << libro.estatus << endl;
                  }
              }
          }
          else {
              cout << h << "Opcion no valida." << endl;
          }
          
      if (op_buscar == "genero") {
              cout << h << "Ingrese el genero del libro: ";
              cout << h; getline(cin, buscar);
              for (const auto& libro : libros) {
                  if (libro.genero == buscar) {
                      cout << h << libro.titulo << h << libro.autor << h << libro.genero << h << libro.anio_publicacion << h << libro.estatus << endl;
                  }
              }
          } else {
              cout << h << "Opcion no valida." << endl;
          }
          cout << endl << "¿Deseas realizar otra busqueda? (si/no): ";
          string respuesta;
          cout << h; cin >> respuesta;
          cin.ignore();
          if (respuesta != "si") {
              break;
          }
      }
      pausa();
  }

```

#### 1. Iteración Tradicional con Índices

```cpp

  for (int i = 0; i < libros.size(); i++) {
      cout << libros[i].titulo << endl;
  }

```

#### 2. Iteración con Rango Basado en For
```cpp

  for (const auto& libro : libros) {
      cout << libro.titulo << endl;
  }

```

#### Diferencias y Recomendaciones

**Iteración Tradicional con Índices**

- **Control total:** Puedes acceder al índice y usarlo para otras operaciones.
- **Compatible con cualquier contenedor:** Funciona con cualquier tipo de contenedor, incluyendo aquellos que no son estándar.
- **Más verboso:** Requiere más código y es más propenso a errores fuera de rango si no se maneja correctamente.

**Iteración con Rango Basado en `For`**

- **Simplicidad:** Menos código y más legible.
- **Seguridad:** Menos propenso a errores de índice fuera de rango.
- **Automática:** El tipo de elemento se deduce automáticamente con auto.
- **Const-correctness:** Usar `const auto&` asegura que los elementos no se modificarán dentro del bucle.

#### ¿Cuál es recomendable y por qué?

**Iteración con Rango Basado en `For`** es más recomendable en la mayoría de los casos debido a su simplicidad y seguridad. Es especialmente útil cuando solo necesitas leer o procesar cada elemento del contenedor sin modificarlo.

**Iteración Tradicional con Índices** es útil cuando necesitas el índice por alguna razón, como acceder a elementos en posiciones específicas o realizar operaciones adicionales con el índice.

### `buscarLibro()`

La función `buscarLibro()`, recorre el `vector<Libro> libros>` en busca de un libro. Para buscar libro, se cuenta con dos opciones: `titulo/genero`. Al ingresar una de las opciones. Al ingresar nombre, busca el libro por su nombre (Escribir el nombre como se ingreso, mayúsculas y minúsculas). Si, es por genero, ingresas el genero del libro. No se ingresa una opción de titulo o genero, nuestra en pantalla `opcion no valida` 

```cpp

  void buscarLibro(const vector<Libro>& libros) {
      string buscar, op_buscar;
      cout << "Buscar libro: " << endl;
      while (true) {
          cout << endl << h << "¿Buscar por titulo o por genero? (titulo | genero): " << endl;
          cout << h; cin >> op_buscar;
          cin.ignore();
          if (op_buscar == "titulo") {
              cout << h << "Ingrese el titulo del libro: ";
              cout << h; getline(cin, buscar);
              for (const auto& libro : libros) {
                  if (libro.titulo == buscar) {
                      cout << h << libro.titulo << h << libro.autor << h << libro.genero << h << libro.anio_publicacion << h << libro.estatus << endl;
                  }
              }
          }
          else {
              cout << h << "Opcion no valida." << endl;
          }
          
      if (op_buscar == "genero") {
              cout << h << "Ingrese el genero del libro: ";
              cout << h; getline(cin, buscar);
              for (const auto& libro : libros) {
                  if (libro.genero == buscar) {
                      cout << h << libro.titulo << h << libro.autor << h << libro.genero << h << libro.anio_publicacion << h << libro.estatus << endl;
                  }
              }
          } else {
              cout << h << "Opcion no valida." << endl;
          }
          cout << endl << "¿Deseas realizar otra busqueda? (si/no): ";
          string respuesta;
          cout << h; cin >> respuesta;
          cin.ignore();
          if (respuesta != "si") {
              break;
          }
      }
      pausa();
  }
```

### `actualizarInformacion()` 

La función `actualizarInformacion()` recorre el vector `vector<Libro> libros`. Actualizar información de un libro, los campos actualizables son `titulo` y `estatus` que puede ser actualizado de `Disponible` a `No disponible`. Con un `if` validamos que actualizar, la opción es correcta nos permite realizar el cambio. El dato ingresado es erróneo, nuestra el mensaje `Libro no econtrado`. Según, la opción ingresado, validamos si existe o no con una variable `bool encontrado`. Con `for` recorremos el `vector` `for (auto& libro : libros)` y con `if` busca el libro, si el libro se encuentra, nos muestra en pantalla; mensaje de actualizar `titulo` o `estatus`. Ingresamos los cambios, se guardan los cambios en memoria. Además, cuenta con la opción de continuar `si/no`. `si`, vuelve al proceso inicial, `no` cierra y retorna al menú principal.

```cpp

  void actualizarInformacion(vector<Libro>& libros) {
      string buscar, op_buscar, nuevo_titulo, nuevo_estatus;
      cout << h << "Actualizar informacion: " << endl;
      while (true) {
          cout << h << "¿Actualizar informacion del libro por titulo o estatus? (Escribe: titulo o estatus): ";
          cin >> op_buscar;
          cin.ignore();

          if (op_buscar == "titulo") {
              cout << h << "Introduce el titulo del libro que deseas buscar: ";
              cout << h; getline(cin, buscar);
              bool encontrado = false;
              for (auto& libro : libros) {
                  if (libro.titulo == buscar) {
                      cout << h << "Libro encontrado: " << endl;
                      cout << h << "Titulo: " << libro.titulo << ", Autor: " << libro.autor << ", Genero: " << libro.genero << ", Año: " << libro.anio_publicacion << ", Estatus: " << libro.estatus << endl;
                      cout << h << "Introduce el nuevo titulo: ";
                      cout << h; getline(cin, nuevo_titulo);
                      libro.titulo = nuevo_titulo;
                      encontrado = true;
                      break;
                  }
              }
              if (!encontrado) {
                  cout << h << "Libro no encontrado." << endl;
              }
          } else if (op_buscar == "estatus") {
              cout << h << "Introduce el genero del libro que deseas buscar: ";
              cout << h; getline(cin, buscar);
              bool encontrado = false;
              for (auto& libro : libros) {
                  if (libro.titulo == buscar) {
                      cout << h << "Libro encontrado: " << endl;
                      cout << h << "Titulo: " << libro.titulo << h<<", Autor: " << libro.autor << h << ", Genero: " << libro.genero 
            << h << ", Año: " << libro.anio_publicacion << h << ", Estatus: " << libro.estatus << endl;
                      cout << h << "Introduce el nuevo estatus: ";
                      cout << h; getline(cin, nuevo_estatus);
                      libro.estatus = nuevo_estatus;
                      encontrado = true;
                      break;
                  }
              }
              if (!encontrado) {
                  cout << h << "Libro no encontrado." << endl;
              }
          } else {
              cout << h << "Opcion no valida." << endl;
          }
          cout << "¿Deseas actualizar otro libro? (si/no): ";
          string respuesta;
          cout << h; cin >> respuesta;
          cin.ignore();
          if (respuesta != "si") {
              break;
          }
      }
      pausa();
  }

``` 

### `descripcion()`

La función `descripcion()` muestra en pantalla información sobre el programa y su versión, desarrolladores y entre otros.

```cpp

  void descripcion() {
      cout << h << "Descripcion: " << endl;
      cout << h << "\tVersion V0.01\n\n\tSistema de Gestion de libros de la Biblioteca de la UVG.\n\n\tOpciones disponibles:\n\n\t\t1. Agregar libros.\n\n\t\t2. Buscar y Listar libros.\n\n\t\t3. Buscar libro por titulo, genero y actualizar los campos del Libro.\n\n\t\t4. Listar libros.\n\n\t\t5. Descripcion del programa.\n\n\t\t6. Salir del programa.\n\n\tDesarrolladores:\n\n\t\t- Evelin Carolina\n\n\t\t- Daniel Andres\n\n\t\t- Juan Ralios\n\n\t\t- Kevin Antonio\n\n\t\t- Victoriano Juarez.\n\n\n\n\tProyecto Final del Curso de Algoritmos y Programacion.\n\n\t\t Lic. Marvin\n\n\n\t\tUniversidad del Valle de Guatemala\n\n\n\t\tAltiplano Solola 2024." << endl << endl;
      pausa();
  }

```

### `pausa()`
La función `pausa`, muestra un mensaje de `continuar`, mantiene en pausa el programa y limpia la terminal.

```cpp

  void pausa() {
      cout << h << "Presiona Enter para continuar...";
      cin.ignore();
      cin.get();
  }

```
### `menu()`

La función `menu()` recorre el `vector<Libro> Libros`, muestra en pantalla las opciones del menú. Con un `switch` se genera las opciones. En cada opción se llama la función correspondiente. Se cuenta con la opción salir del programa, al seleccionar la 6, el programa se cierra.

```cpp

  void menu(vector<Libro>& libros) {
      int op;
      do {
          cout << endl;
          cout << h << "====================" << endl;
          cout << h << "== Biblioteca UVG ==" << endl;
          cout << h << "====================" << endl;
          cout << h << " ====== Menu ====== " << endl;
          cout << h << "====================" << endl;
          cout << h << "1. Ingresar libros" << endl;
          cout << h << "2. Buscar y Mostrar informacion" << endl;
          cout << h << "3. Actualizar informacion" << endl;
          cout << h << "4. Listar Libros" << endl;
          cout << h << "5. Descripcion" << endl;
          cout << h << "6. Salir" << endl << endl;

          cout << h << "Elige una opcion: ";
          cout << h; cin >> op;
          cin.ignore(); // Limpiar el buffer de entrada
          system("cls");

          switch (op) {
              case 1:
                  ingresarLibros(libros);
                  break;
              case 2:
                  buscarLibro(libros);
                  break;
              case 3:
                  actualizarInformacion(libros);
                  break;
              case 4:
                  cout << h << "Listar Libros: " << endl;
                  mostrar(libros);
                  pausa();
                  break;
              case 5:
                  descripcion();
                  break;
              case 6:
                  cout << h << "Saliendo..." << endl;
                  break;
              default:
                  cout << h << "Opcion incorrecta" << endl;
                  pausa();
                  break;
          }
      } while (op != 6);
  }

```

### Función principal `main()`

En la función principal, declaramos el vector `vector<Libro> libros`, el programa requiere de 2 libros en la Biblioteca. Añadimos, los 2 libros. Llamamos a la función `menu(libros)` pasándole el parámetro `libros`. El programa prácticamente esta listo para ser publicado.

  ```cpp

  int main() {
      vector<Libro> libros;
      libros.push_back({"Eloquent Javascript", "Marijin Haverbeke", "Programacion", 2024, "Disponible"});
      libros.push_back({"Fundamentos de Programacion usando PSeInt", "Ivan Garcia", "Logica", 2014, "Disponible"});
      menu(libros);
      return 0;
  }
  
```

De esta manera completamos el programa. Con las funcionalidades requeridades, el programa es listo para ser publicado.

[Github | Repositorio](https://github.com/T32la/Gestion_de_Biblioteca)