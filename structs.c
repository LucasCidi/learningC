
#include <stdio.h>

typedef struct
{
    float numerador;
    float denominador;
} Fracao;

float calculaRef(const Fracao *frac) {
    return frac->numerador / frac->denominador;
}

float calcula(const Fracao frac)
{
    return frac.numerador / frac.denominador;
}

Fracao multiplica(Fracao* a, Fracao* b) {
    Fracao c;
    c.numerador = a->numerador * b->numerador;
    c.denominador = a->denominador * b->denominador;
    return c;
}

int main()
{
    Fracao f1;
    f1.numerador = 10;
    f1.denominador = 2;

    Fracao f2 = {18, 3};
    Fracao f3 = multiplica(&f1,&f2);
    printf(calculaRef(&f3));
    
}