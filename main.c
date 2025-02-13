#include <stdio.h>
#include "NumerosComplejos.h"
#include "Bitmap.h"

complejo posicion(double x, double y);
int mandelbrot(complejo c, int max_iteraciones);

int main() {
    int i, j;
    int ancho = 640;
    int alto = 480;
    int max = 64;
    Bitmap gradiente = createBitmap("gradiente.bmp", ancho, alto, 3);

    for(i = 0; i < ancho; i++) {
        for(j = 0; j < alto; j++) {
            complejo c = posicion(i,j);
            putPixel(&gradiente, i, j,(char)(mandelbrot(c,max)));
        }
    }
    saveBitmap(&gradiente);

    return 0;
}
complejo posicion(double x, double y){ //cada punto(x,y) tiene asociado un numero complejo
    complejo c=crearComplejo(x/160.0-2.5,y/160.0-1.5);

    return c;
}
int mandelbrot(complejo c, int max_iteraciones){
    complejo c1 = crearComplejo(0,0);
    int iteracion=0;
    while(modulo(c1) < 2 && iteracion < max_iteraciones){
        c1=producto(c1,c1);
        c1=suma(c1,c);       // c1 = c1 * c1 + c
        iteracion ++;
    }
    if(iteracion == max_iteraciones)
        return iteracion; //c pertenece al conjunto Mandelbrot (color negro)
    else
        return iteracion;//c no pertenece al conjunto Mandelbrot (resto de colores dependiendo del numero de iteraciones)
    //el numero de iteraciones esta asociado a un color (0-rojo, ..., 64-negro)
}