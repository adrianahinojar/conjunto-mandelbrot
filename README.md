# Generador de Conjunto de Mandelbrot

## Descripción
Este proyecto implementa un generador del conjunto de Mandelbrot en lenguaje C. El programa crea una imagen en formato BMP que representa el conjunto de Mandelbrot utilizando un esquema de colores basado en el número de iteraciones requeridas para determinar si un punto pertenece al conjunto.

## Características
- Representación del conjunto de Mandelbrot mediante números complejos.
- Cálculo iterativo del conjunto mediante la función de Mandelbrot.
- Generación de una imagen BMP con colores asociados a las iteraciones.
- Uso de estructuras para manejar datos de imagen y números complejos.

## Estructura del Proyecto
El código se divide en los siguientes módulos:

- `main.c`: Archivo principal que ejecuta la generación de la imagen del conjunto de Mandelbrot.
- `NumerosComplejos.h` y `NumerosComplejos.c`: Implementación de operaciones con números complejos.
- `Bitmap.h` y `Bitmap.c`: Manejo de archivos BMP, incluyendo creación, escritura y manipulación de píxeles.
- `colourScale.h`: Definición de la escala de colores utilizada para la imagen.

## Instalación y Ejecución
### Prerrequisitos
- Compilador de C (GCC recomendado)
- Sistema operativo compatible con archivos BMP (Windows, Linux, MacOS)

### Compilación
Para compilar el programa, ejecutar el siguiente comando en la terminal:
```bash
gcc main.c Bitmap.c NumerosComplejos.c -o mandelbrot -lm
```

### Ejecución
Ejecutar el binario generado:
```bash
./mandelbrot
```
Esto generará un archivo `gradiente.bmp` en el directorio de ejecución, que representará el conjunto de Mandelbrot.

## Licencia
Este proyecto se distribuye bajo la licencia MIT.

## Autores
Desarrollado por [Tu Nombre]

