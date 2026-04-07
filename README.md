# Investigacion sobre .gitignore

###	¿Qué es el archivo .gitignore?

El archivo _.gitignore_ es un archivo de texto que se utiliza en proyectos que usan Git como sistema de control de versiones. Su función es indicarle a Git qué archivos o directorios deben ser ignorados y no incluidos en el control de versiones. Esto es útil para evitar que archivos temporales, configuraciones locales, o archivos generados automáticamente sean seguidos por Git, lo que podría generar ruido innecesario en el repositorio.

### ¿Por qué es conveniente incluirlo?

Incluir un archivo .gitignore es conveniente por varios motivos:

-**Evitar incluir archivos innecesarios:** Hay archivos que son específicos para cada desarrollador o para el entorno local (como archivos de configuración de IDE, binarios generados, logs, etc.), que no deben ser parte del repositorio.

-**Mantener el repositorio limpio:** Si subes estos archivos innecesarios al repositorio, puedes llenar el historial de Git con cosas irrelevantes, haciendo que el repositorio sea más pesado y difícil de gestionar.

-**Mejorar la seguridad:** Algunos archivos, como credenciales o configuraciones sensibles, no deben ser compartidos ni versionados. .gitignore ayuda a evitar que estos archivos se suban accidentalmente.

-**Optimizar el rendimiento:** Ignorar archivos que no son relevantes para el proyecto ayuda a mejorar el rendimiento del repositorio, ya que Git no tiene que manejar estos archivos.


### ¿Cuándo se debe hacer?

El archivo .gitignore se debe crear al inicio del proyecto o cuando se empiece a utilizar Git. Lo ideal es incluirlo antes de realizar cualquier commit, ya que si los archivos no deseados ya están en el repositorio, es necesario eliminarlos del historial del proyecto, lo cual puede ser un proceso algo complicado.

Aunque también puedes agregarlo en cualquier momento, incluso después de que el repositorio haya sido creado. Sin embargo, si ya tienes archivos no deseados en el repositorio, tendrías que eliminarlos explícitamente usando comandos como _git rm_ para retirarlos.


### ¿Cómo se configura el archivo .gitignore?

El archivo .gitignore se configura de forma muy sencilla. Dentro de él puedes escribir las reglas de ignorado para que Git sepa qué archivos o directorios deben ser ignorados. Algunas de las configuraciones más comunes son:

-**Ignorar archivos o carpetas específicas:** Puedes especificar el nombre exacto del archivo o carpeta.

Por ejemplo:
archivo.log
carpeta/

-**Ignorar extensiones de archivos:** Puedes ignorar todos los archivos con una extensión específica.

Por ejemplo:
*.log
*.tmp

-**Ignorar archivos dentro de una carpeta:** Puedes especificar que se ignoren archivos dentro de una carpeta, pero no la carpeta misma.

Por ejemplo:
carpeta/*.log

-**Negar una regla:** Si quieres que Git siga un archivo que previamente habías ignorado, puedes usar el signo de exclamación _!_.

Por ejemplo:
*.log
!archivo.log

-**Ignorar archivos de un tipo o patrón en todo el proyecto:** Puedes usar patrones como **/ para ignorar archivos en cualquier carpeta del proyecto.

Por ejemplo:
**/*.log