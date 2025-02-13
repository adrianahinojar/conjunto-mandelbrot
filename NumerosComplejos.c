#include "NumerosComplejos.h"
#include <math.h>

complejo crearComplejo(double real, double imaginaria){
    complejo c;
    c.real=real;
    c.imaginaria=imaginaria;
    return c;
}
complejo suma(complejo c1, complejo c2) {
    complejo c3;
    double r1 = parteReal(c1);
    double i1 =parteImaginaria(c1);
    double r2 = parteReal(c2);
    double i2= parteImaginaria(c2);
    c3.imaginaria= i1 + i2;
    c3.real= r1 + r2;
    return c3;
}
complejo resta(complejo c1, complejo c2) {
    complejo c3;
    double r1 = parteReal(c1);
    double i1 =parteImaginaria(c1);
    double r2 = parteReal(c2);
    double i2= parteImaginaria(c2);
    c3.imaginaria= i1 - i2;
    c3.real= r1 - r2;
    return c3;
}
complejo producto(complejo c1, complejo c2){
    complejo c3;
    double r1 = parteReal(c1);
    double i1 =parteImaginaria(c1);
    double r2 = parteReal(c2);
    double i2= parteImaginaria(c2);
    c3.imaginaria= i1*r2 + r1*i2;
    c3.real= r1*r2 - i1*i2;
    return c3;
}
complejo division(complejo c1,complejo c2){
    complejo c3;
    double r1 = parteReal(c1);
    double i1 =parteImaginaria(c1);
    double r2 = parteReal(c2);
    double i2= parteImaginaria(c2);
    c3.real= ((r1*r2) + (i1*i2))/(pow(r2,2)+pow(i2,2));
    c3.imaginaria=((i1*r2)-(r1*i2))/(pow(r2,2)+pow(i2,2));
    return c3;
}
double parteReal(complejo c){
    return c.real;
}
double parteImaginaria(complejo c){
    return c.imaginaria;
}
double modulo(complejo c){
    double r = parteReal(c);
    double i =parteImaginaria(c);
    double modulo=sqrt(pow(r,2)+pow(i,2));
    return modulo;
}
complejo conjugado(complejo c){
    complejo c2;
    double r = parteReal(c);
    double i =parteImaginaria(c);
    c2.real=r;
    c2.imaginaria=i*(-1);
    return c2;

}