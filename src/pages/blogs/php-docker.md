---
layout: "../../layouts/Blog.astro"
poster: "https://imgs.search.brave.com/Ez0CHAx_Syxg6dCsBcCJ3nT3kdVnpMtC07e9v9umR8Q/rs:fit:860:0:0/g:ce/aHR0cHM6Ly9ibG9n/LmRldnNlbnNlLmNv/bS9ibC1jb250ZW50/L3VwbG9hZHMvcGFn/ZXMvYXV0b3NhdmUt/MTE3NTViMWNhZjFj/ZGYyOWZlZDdkY2Ux/ZGM4NDlmODgvcGhw/b25kb2NrZXIucG5n"
title: "Entorno de Desarrollo para php y Docker"
subtitle: "¿Cómo configurar un contenedor de docker para PHP?"
date: "febrero 27, 2024"
author: "Victoriano Juárez"
---

Quieres aprender php, pero las configuraciones te han abrumado y el deseo de aprender van mermando. **No, no detengas tu aprendizaje**, siempre existe una solución a los problemas. Instalar php, configurar un servidor web en Windows es muy sencillo, en Linux y macOS es otra situación. Debes conocer sobre la terminal, un editor de código, vim, nano, ser avanzado... y mucho más. 

La herramienta que vamos a utilizar y que permite trabajar con php, un servidor web y la terminal es `Docker`.

[**Docker:**](https://www.docker.com/) Es una plataforma de software que permite crear, probar e implementar aplicaciones rápidamente.

**Docker-compose:** Es una herramienta para definir y ejecutar aplicaciones; es multicontenedor que permite simplificar el uso de Docker a partir de archivos YAML, de esta forma es más sencillo generar contendores que se relacionen entre sí, conectarlos, habilitar puertos, volúmenes, etc.

**Servidor web:** software que permite a los usuarios ver una página web en su navegador. Servidores más utilizados `Apache` y `Nginx`.

## Configuración de `docker-compose.yml`

Crear el archivo `docker-compose.yml` con la siguiente configuración:

```yml

  # Los archivos docker-compose.yml 
  # son versionados, lo que significa 
  # que es muy importante indicar la 
  # versión de las instrucciones que queremos darle.

  version: "3.3"

  # Servidor nginx
  services:
    web:
        # versión
      image: nginx:latest
      # Puerto 8080 
      ports:
        - "8080:80"
      volumes:
        - ./src:/var/www/html
        - ./default.conf:/etc/nginx/conf.d/default.conf
      links:
        - php-fpm

    # Configuración de php-fpm
    php-fpm:
      image: php:8-fpm
      volumes:
        - ./src:/var/www/html


```

Creamos un nuevo archivo con el nombre `default.conf` con la siguiente configuración, al nivel que `docker-compose.yml`.

```php

  # No te preocupes, por las configuraciones. 
  server {
    index index.php index.html;
    server_name phpfpm.local;
    error_log  /var/log/nginx/error.log;
    access_log /var/log/nginx/access.log;
    root /var/www/html;

    location ~ \.php$ {
      try_files $uri =404;
      fastcgi_split_path_info ^(.+\.php)(/.+)$;
      fastcgi_pass php-fpm:9000;
      fastcgi_index index.php;
      include fastcgi_params;
      fastcgi_param SCRIPT_FILENAME $document_root$fastcgi_script_name;
      fastcgi_param PATH_INFO $fastcgi_path_info;
    }
  }


```

## Comandos de `docker-compose`

Crea e Iniciar el contenedor:

```sh

  #| Crea e inicia el contenedor
  # -d inicia los contenedores en segundo 
  # plano y los deja en ejecución.
  ➜ docker-compose up -d

  
```

<img title="" src="https://i.ibb.co/st9VyTB/up-docker-compose.png" alt="up-docker-compose" style="zoom:67%;">

```sh

  # Crea e inicia el contenedor en primer plano
  ➜ docker-compose up


```

<img title="" src="https://i.ibb.co/FhkbSvz/start-docker-compose.png" alt="start-docker-compose" style="zoom:67%;">

Para que la interacción sea efectiva y el aprendizaje una experiencia positiva, los archivos `.php` se crean dentro del directorio `src`.

```sh

  # directorio principal
  ├── docker-php
  │   ├── default.conf
  │   ├── docker-compose.yml
  │   ├── README.md
  │   └── src       # Directorio
  │       ├── holi.php
  └──     └── index.php

  # Dentro de la carpte src, crear el archivo index.php

```

Crear el archivo `index.php` en el directorio `src`, 

```php

  # contenido de index.php
  <?php
    echo phpinfo();


```

Ir al navegador favorito, visitar el siguiente enlace `http://localhost:8080`. Surge algún un error con la conexión al servidor local, agregar en la dirección `php-fpm.` a `localhost:8080`. La dirección queda de la siguiente forma:

```sh

  http://php-fpm.localhost:8080/


```

<img title="" src="https://i.ibb.co/jDp9wTW/php-localhost.png" alt="php-localhost" style="zoom:33%;">

Listo, tienes corriendo tu primer servidor `nginx`, junto a `php` utilizando `docker-compose`.

### Interactuar con la terminal de docker-compose

Ingresar a `bash` de `docker-compose`

```sh

  ➜ docker-compose exec php-fpm bash


```

<img title="" src="https://i.ibb.co/R4SLY7r/bash-Docker-compose.png" alt="bash-Docker-compose" style="zoom:67%;">

Crea el archivo `variables.php`

```sh

  # crear archivo
  touch variables.php


```

`variables.php`

```php

  <?php
  // Definir variables
  $numero_1 = 8;
  $numero_2 = 7;

  // Definir constantes
  define("NUMERO_PI", 3.14);
  // define("NUMERO_PI", 14);

  echo NUMERO_PI;

  echo "\n";

  echo $numero_1 + $numero_2;

  echo "\n";%    


```

<img title="" src="https://i.ibb.co/KjL4KTD/VSCode.png" alt="VSCode" style="zoom:67%;">

Ejecutamos el archivo `php` en terminal:

```sh

  php variables.php


```

<img title="" src="https://i.ibb.co/MGKQk3n/ejecutar-php.png" alt="ejecutar-php" style="zoom:67%;">

Con el comando `exit`, cerramos bash.

Detener el contenedor que se ejecuta en segundo plano

```sh

  # Segundo plano
  docker-compose down


```

Detener contenedor en primer plano

```sh

  # Primer plano
  ctl + c


```

<img title="" src="https://i.ibb.co/WzVDLjz/docker-compose-down.png" alt="docker-compose-down" style="zoom:67%;">

## Conclución

Docker es el sistema de contenedores. Que permite crear proyectos con el lenguaje de programación que se require. Para utilizar docker es necesario instalarlo, docker cuenta con soporte para `Windows`, `Linux` y `macOS`. El sitio web de docker puede identificar que sistema operativo se esta utilizando, el cual genera el boton para descargar el instalador de docker. En `Windows` y `macOS` puedes descargar el instalador de docker, para `linux` puedes realizar la configuración desde la terminal.

Para crear un contenedor de docker con las configuraciones que requiere el proyecto, puedes utilizar el archivo `DOCKERFILE` y para la configuación de `docker-compose` se utiliza `docker-compose.yml`.
Para levantar los contenedores puedes utilizar los comandos por termianl o utilizar su aplicación.

**Enlace del Repositorio**

<a href="https://gitlab.com/V-Juarez/php/-/tree/php-docker"><img src="https://img.shields.io/badge/GitLab-330F63?style=for-the-badge&logo=gitlab&logoColor=white" target="_blank"></a>
<<<<<<< HEAD
=======

**Nunca pares de aprender**

>>>>>>> 4db9bde1cfcb0b909df1fa7b8a49167c92dba599
