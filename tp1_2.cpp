#include <stdio.h>
#include <stdlib.h>


int funcionCuadrado1(int numero);
void funcionCuadrado2(int *pnumero);
void dirVariable(int numero);
void invertir(int *pa, int *pb);
void orden(int *pa, int *pb);

int main() {
int numeroA, numeroB, resultado;
    printf("Escriba un número a:\n");
    scanf(" %d",&numeroA);
    printf("Escriba un número b:\n");
    scanf(" %d",&numeroB);
    resultado=funcionCuadrado1(numeroA);
    printf("El cuadrado de a calculado con la primera función es: %d\n", resultado);
    funcionCuadrado2(&numeroB);
    printf("El cuadrado de b calculado con la segunda función es: %d\n", numeroB);
    printf("A partir de ahora A es: %d y B es %d\n", numeroA, numeroB);
    dirVariable(numeroA);
    dirVariable(numeroB);
    invertir(&numeroA, &numeroB);
    printf("A partir de invertir ahora A es: %d y B es %d\n", numeroA, numeroB);
    orden(&numeroA, &numeroB);
    printf("A partir de orden ahora A es: %d y B es %d\n", numeroA, numeroB);    
    return 0;
}

// Definición de las funciones

int funcionCuadrado1(int numero) {
int resultado;
resultado=numero*numero;
return resultado;
}

void funcionCuadrado2(int *pnumero) {
    *pnumero=*pnumero*(*pnumero);
}

void dirVariable(int numero) {
    printf("La direccion de memoria de la vble: %p\n", &numero);
    printf("El contenido de la variable: %d\n", numero);
}

void invertir(int *pa, int *pb) {
int aux;
aux= *pb;
*pb= *pa;
*pa= aux;
}

void orden(int *pa, int *pb) {
int aux;
if(*pa>*pb){
aux= *pb;
*pb= *pa;
*pa= aux;    
}
}