---
layout: "../../layouts/Blog.astro"
poster: "https://imgs.search.brave.com/1bpZfrcMGlADVjJ-jREkSR9272GIzeH3yfxp4H-3YHY/rs:fit:860:0:0/g:ce/aHR0cHM6Ly9tZWRp/YS5nZWVrc2Zvcmdl/ZWtzLm9yZy93cC1j/b250ZW50L2Nkbi11/cGxvYWRzLzIwMjAw/NTI5MjEzNTI5L0dp/dC12cy1HaXRIdWIu/cG5n"
title: "Configurar Git y GitHub en local"
subtitle: "¿Cómo configurar git y utilizarlo desde la terminal?"
date: "marzo 5, 2024"
author: "Victoriano Juárez"
---

## Git y Github

Como desarrollador siempre debemos de contar con una herramienta/software para nuestros control de versiones de los proyectos. Evitando, generar muchos documentos como: `documentoFinal.js`, `documentoFinal1.js` y asi hasta completar el proyecto. Git y GitHub es la red social de los desarrolladores.

> Git es el sistema de control de versiones. Creado por Linus Torval.

**Los beneficios de utilizar Git Y GitHub desde la terminal es:**

- Manejo de los cambios.
- Recuperar archivos
- Guardar Cambios
- ¿Quién hizo los cambios? y muchas cosas más.

### Descargar git para Windows

[Download Git | Para Windows](https://git-scm.com/downloads)

<img title="git" src="https://kinsta.com/wp-content/uploads/2020/01/download-git-1.png" alt="Git" style="zoom:40%;">

En sistemas como Linux y macOS, cuenta con git.
Para verificar que git este instalado, en terminal ejecutar el siguiente comando:

```shell

  git --version

  # git version 2.43.0.windows.1


```

### Crear una cuenta gratuita en [Github](https://github.com) 

<img title="" src="https://kinsta.com/wp-content/uploads/2020/01/github-homepage-1.png" alt="Github" style="zoom:40%">

### Configuración de SSH

Usando el protocolo SSH, te puedes conectar y autenticar con servicios y servidores remotos. Con la clave SSH, te puedes conectar con GitHub sin suministrar tu nombre de usuario ni contraseña en cada visita.


### Tipos de archivos

* **Archivos de texto:** Texto plano normal y sin nada especial.
* **Archivos RTF:** Podemos guardar texto con diferentes tamaños, estilos y colores. Si lo abrimos en un editor de código, es más complejo que solo el texto plano. Archivo binario.
* **Archivos DOCS/word:** Podemos guardar imagens texto con diferents tamaños y estilos, colores. Un editor de código, le es complicado entender los datos de un archivo binario.

**[Git](https://destevez.me/diffs-con-git.html)** fue diseñado para almacenar código fuente, que normalmente se guarda en archivos de texto. Si tenemos alguna forma de obtener un archivo de texto a partir del binario que queremos guardar, **git** nos permite usar ese archivo en lugar del binario dentro del repositorio.

<img src="https://miro.medium.com/v2/resize:fit:1100/format:webp/0*g1qqhhiT47DqxLsl.png" style="zoom:60%;" />

**Archivo de texto plano:** Un Texto plano (plain text), son aquellos archivos formados exclusivamente por texto (sólo caracteres), sin ningún formato; es decir, no requieren ser interpretados para leerse (aunque pueden ser procesados en algunos casos). También son llamados archivos de texto llano, simple o sin formato

**Archivo Binario:** Los archivos binarios que contienen bytes suelen ser interpretados como alguna cosa que no sean caracteres de texto. Un ejemplo típico son los programas de ordenador compilados; de hecho, las aplicaciones o programas compilados son conocidos como binarios, especialmente entre los programadores.

### Configurar Git Local desde Terminal

Configurar `git` en local o en nuestro equipo con los siguientes comandos:

```shell

    # configurar nombre de usuario | <nombre - user>
    git config --global user.name tesla

    # configurar correo email | <email>
    git config --global user.email "tesla@gmail.com"

    # configurar editor | vim | nvim | vi | <editor>
    git config --global core.editor vim 

    # configurar los colores
    git config --global ui.color auto


```

```shell

    # con el comando podemos ver la configuracion
    git config --global -l

   # user.name=Tesla
   # user.email=tesla@gmail.com
   # core.editor=nvim
   # ui.color=auto

```


### Configurar llaves SSH en local

[Crear llaves SSH](https://platzi.com/tutoriales/1557-git-github/4067-configurar-llaves-ssh-en-git-y-github/)

### Generar Llave

Para para generar la llave para conectar el repositorio local con el remoto. 

_Sobre el comando, no te preocupes. No tienes que entenderlo por ahora. Es una de las configuraciones más  seguras_. En `gmail` debes utilizar el mismo correo con el que generaste la cuenta en GitHub. 

> _No funciono si utilizas otro correo, que no se encuentra registrado en GitHub_

Todo el proceso ser realiza desde la terminal.

Crear la carpeta `.ssh`

```bash

	# Crear carpeta en el directorio ~/
	mkdir .ssh
	
	# Moverse a la carpeta .ssh
	cd .ssh
	


```

Generar Llave:

```bash

    # Generar llave
    > ssh-keygen -t rsa -b 4096 -C "email"

    # Solicita un nombre
    # github | gitlab | patito o que quieras
    # Solicita una contraseña 
    # Puedes dejarlo en blanco o le agregas una
    # contrasena. 
    # La contrasena te la va a pedir cada vez que realices un push 
    # a las ramas remotas
    

```

<img src="https://kinsta.com/wp-content/uploads/2022/01/ssh-keygen.png" style="zoom:57%;" />

### Validar llave

```bash

	eval $(ssh-agent -s)


```

### Agregar llave a equipo local

```bash

	ssh-add  <ruta-de-la-llave> ruta ~/.ssh/id_rsa
	

```

```bash

    # Linux
    > ssh-add ~/.ssh/id_rsa     	# Linux y windows

    # MacOS
    > ssh-add -k ~/.ssh/id_rsa  	# solo en mac se le agrega -k


```

### Configurar key gitlab

```bash

    ssh-keygen -t rsa -b 4096 -C "email"

    eval $(ssh-agent -s)

    ssh-add  <ruta-de-la-llave> ruta ~/.ssh/id_rsa

    ssh-add ~/.ssh/id_rsa     # Linux y windows
    ssh-add -k ~/.ssh/id_rsa 	# solo en mac se le agrega -k


```

-  Conectar git  a gitlab
-  Crear en el directorio `/home/usr/.ssh` el archivo `config`

### Crear configuracion de llaves

```bash

    # Crear archivo
    touch config

    # Conceder permisos
    chmod +x config

    # editamos con vim, vi, nano ...
    vim config


```
**Archivo** `config`

```bash

    # Configuracion GitLab
    Host *
      AddKeysToAgent yes
      IdentityFile ~/.ssh/github       # Llave privada -> key con diferentes nombres

    # Configuracion GitLHu
    Host *
      AddKeysToAgent yes
      IdentityFile ~/.ssh/id_rsa      # Llave privada -> key con diferentes nombres
  
  
```

Al generar las llaves se crean dos Archivos (el nombre que le asignaste) en este caso `id_rsa` y `id_rsa.pub`. 

- El primero es la `llave privada`  `id_rsa`el contenido nunca o por cualquier motivo, circunstancia debes compartirlo, no se comparte. 
- La segunda es la `llave publica - .pub` `id_rsa.pu` el contenido puedes utilizarlo como consideres necesario, se prudente.

Con el siguiente comando copias el contenido de la llave publica.

```sh


    # Directorio .ssh
    cat id_rsa.pub

    # # ssh-ed25519 AAAAC3NzaC1lZDI1NTE5AAAAIJl3dIeudNqd0DPMRD6OIh65tjkxFNOtwGcWB2gCgPhk kinstauser@kinsta.com

    # copias el contenido con ctl + shift + c
    

```

### Para github, la configuración:

1. [Entra en GitHub \]](https://github.com/login) y ve a la sección superior derecha de la página, haz clic en tu foto de perfil y selecciona ***\*Configuración.\****

<img src="https://kinsta.com/wp-content/uploads/2022/01/GitHub-settings.png" />

2 A continuación, en el perfil de tu configuración, haz clic en **Claves SSH y GPG**.

<img src="https://imgs.search.brave.com/X1MAQi8DFtbKSvC3SLICbqgw2tYYpwk7AWnt-fERa90/rs:fit:860:0:0/g:ce/aHR0cHM6Ly9raW5z/dGEuY29tL3dwLWNv/bnRlbnQvdXBsb2Fk/cy8yMDIyLzAxL0dp/dEh1Yi1zc2gtZ3Bn/LWtleXMucG5n" />

3. Haz clic en el botón **Nueva** clave SSH.

   <img src="https://kinsta.com/wp-content/uploads/2022/01/GitHub-new-ssh-key.png" style="zoom:50%;" />

4. Dale un nombre a la clave SSH en GitHub. El nombre que deseas y luego pega la clave publica.

<img src="https://kinsta.com/wp-content/uploads/2022/01/title-key-field.png" style="zoom:67%;" />

4.  Agrega la llave.

<img src="https://kinsta.com/wp-content/uploads/2022/01/add-ssh-key-button.png" />

Copias el contenido del llave id_rsa.pub. En github agregas una llave ssh, pegas. Listo.

Haz, establecido conexion correctamente con Gitlab & Github. Felicidades

### Creas un repositorio

```bash

    # copias el link en code <botton verde>
    # para colonarlo
    git clone <linK>



```

### Lecturas Recomendadas: 

- [Setting up a repository](https://www.atlassian.com/git/tutorials/setting-up-a-repository)
- [Git VS GitHub](https://kinsta.com/knowledgebase/git-vs-github/)