cmake_minimum_required(VERSION 3.24)
project(Mandelbrot C)

set(CMAKE_C_STANDARD 99)

add_executable(Mandelbrot main.c NumerosComplejos.c NumerosComplejos.h Bitmap.c Bitmap.h colourScale.h)
