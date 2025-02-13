#ifndef MANDELBROT_NUMEROSCOMPLEJOS_H
#define MANDELBROT_NUMEROSCOMPLEJOS_H

typedef struct{
    double real;
    double imaginaria;
}complejo;

complejo crearComplejo(double real, double imaginaria);
complejo suma(complejo c1, complejo c2);
complejo resta(complejo c1, complejo c2);
complejo producto(complejo c1, complejo c2);
complejo division(complejo c1,complejo c2);
double parteReal(complejo c);
double parteImaginaria(complejo c);
double modulo(complejo c);
complejo conjugado(complejo c);

#endif //MANDELBROT_NUMEROSCOMPLEJOS_H
