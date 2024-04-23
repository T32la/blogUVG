---
layout: "../../layouts/Blog.astro"
poster: "https://imgs.search.brave.com/oee_w25yDMIylFcUgQo_cLhFCFcgOug3hXy8JdidFRU/rs:fit:860:0:0/g:ce/aHR0cHM6Ly9jNC53/YWxscGFwZXJmbGFy/ZS5jb20vd2FsbHBh/cGVyLzk2OC81MzYv/OTA1L3RlY2hub2xv/Z3ktZ2l0LWhkLXdh/bGxwYXBlci1wcmV2/aWV3LmpwZw"
title: "Comandos para Git y Github"
subtitle: "Guardar tu proyecto en Git, experiencias rápidas para desarrolladores."
date: "marzo 12, 2024"
author: "Victoriano Juárez"
---

¿Cómo guardas tus archivos, datos, código...? 

Guardas los archivos como:

- `document1`

al realizar los cambios:

- `document1.2_cambios`
- `document1.3_cambios`
- `document1.4_cambios`
- `document1.5_cambios`
- `document1.6_cambios`

haz realizado, los cambios. Ahora, solo queda el proceso final. Y vuelves a realizar:
  
- `documento_final`,
- `documento_final_corregido`,
- `trabajoFinal`,
  
Luego, creas una carpeta por cada documento. Carpetas y documentos, mentalmente la veriamos de esta manera:

```

    PS C:\Users\blanc\Videos\proyecto> tree /F
    Listado de rutas de carpetas
    El número de serie del volumen es 9A4A-34D2
    C:.
    ├───corregido
    │       documento.docx
    │
    ├───corregido _hoy
    │       copia_decambios.docx
    │
    ├───corregido_ayer
    │       ndad.docx
    │
    ├───corregido_cambios
    │       cambios_generales.docx
    │
    ├───corregido_maniana
    │       maniana.docx
    │
    └───final
            final.docx

    PS C:\Users\blanc\Videos\proyecto>


```

Es una forma ordenada de guradar los documentos. Pero, en realidad los documentos estan dispersos, y en varios sitios.

Es un problema de organización. Que consideramos normal, durante mucho tiempo. Y esposible, que os guste guardarlo de esta manera.

## Git y GitHub

Git y GitHub, son herramientas que nos permite organizar y manejar un historial de cambios.

> **Git:** software de control de versiones diseñado por Linus Torvalds, pensando en la eficiencia, la confiabilidad y compatibilidad del mantenimiento de versiones de aplicaciones cuando estas tienen un gran número de archivos de código fuente.

> **GitHub:** es una plataforma de desarrollo colaborativo que aloja proyectos en la nube utilizando el sistema de control de versiones llamado Git.

Git, es sencillo de aprender. Cuenta con dos maneras de guardar los archivos y los cambios. Una es a través de la apliación de Github. Y la segunda es la terminal (cmd/Powershell | Windows).

### Aplicación de GitHub

Descarga la aplicación de GitHub: [GitHub Desktop](https://desktop.github.com/)

<img title="github" src="https://imgs.search.brave.com/iD2TuJOwBCsBCjcZZ-UawbJJTw_sfTGFyVyfwwOjItU/rs:fit:500:0:0/g:ce/aHR0cHM6Ly9zdGF0/aWMxLm1ha2V1c2Vv/ZmltYWdlcy5jb20v/d29yZHByZXNzL3dw/LWNvbnRlbnQvdXBs/b2Fkcy8yMDIzLzA3/L3dlbGNvbWUtdG8t/Z2l0aHViLWRlc2t0/b3AuanBlZw" alt="Github" style="zoom:120%;">

Es sencillo de instalar, muy intuitivo y simple de usar.

### Git desde la terminal

Vamos a ver los comandos basicos de git. Para guardar un archivo, guardar cambios y mucho mas.

### Comando Inicial

Iniciar git, con el comando

```sh

    git init

    #  main []


```

Se crea un nuevo repositorio. En la rama principal llamada `main`. `git` trabaja por medio de ramas.

### Comando para guardar cambios

```sh

    git add .

    # o

    git add <nombre-del-archivo>


```

Se agrega el archivo o directorio.

### Comando para agregar un mensaje a los cambios realizados | `commit`

```sh

    git commit -m "mensaje del commit"

    

```

Es importante agregar un mensaje al commit. Es para identificar los cambios.

### Comando para verificar los cambios

```sh

    git status

    Changes not staged for commit:
      (use "git add <file>..." to update what will be committed)
      (use "git restore <file>..." to discard changes in working directory)
            modified:   src/pages/blogs/comando-git.md
            modified:   src/pages/blogs/github.md

    no changes added to commit (use "git add" and/or "git commit -a")


```

Muestra un mensaje de que cambios se realizado.

### Comando para mostrar el historial de cambios

```sh

    git log

    commit a4f1a6960f0cfa15565f8ed209a5d4c7cb2a5779 (HEAD -> main, origin/main, origin/HEAD)
    Author: Tesla <dev@gmail.com>
    Date:   Mon Apr 22 07:54:56 2024 -0600

        add date and author


```

Ver los cambios realizados, desde el principio. Los detalles son sobre el autor, fecha, hora y cambios realizados.

### Comando para borrar un archivo

```sh

    git rm <nombre-del-archivo>


```

## Enviar y descargar cambios a github

### Comando para descargar los cambios desde github

```sh

    git pull

    Already up to date.


```

Cuando existe cambios en github, se descargan los cambios.

### Compando para subir los cambios a github

```sh

    git push

    # o

    git push origin main


```

Enviar los cambios a github.

## Dato adicional

Tienes un repositorio en `Github` y debes trabajar con ello.

#### Comando para clonar un repositorio

```sh

    git clone <link-del-repositorio>

    # clone 
    git clone https://github.com/T32la/Learning.git


```

## Conclusión

Git es una de las herramientas para guardar, gestionar, realizar cambios, agregar nuevas funcionalidades y mucho mas. Con ayuda de github, puedes organizar tu trabajo. Es mucho más practico al realizar las actividades cotidianas del proyectos.

Desde `github` puedes realizar cambios, subirlos y descargarlos. Lo esencial es que puedes acceder a tu repositorio, desde donde te encuentres. - Claro, con ayuda de una computadora. El trabajo es mucho mas fácil. Los cambios que realizas se guardan automaticamente. Además, cuentas con un historial de los cambios realizados.

- Git es rápido
- Guardar proyectos de multiples Lenguajes
- Git es libre.
- Github | gratis: actividas limitados. | premium: activas ilimitadas.

Aprende `git` y haz que tus documentos, carpetas, proyectos se guarden de manera correcta.
