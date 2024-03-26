#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numero=11,
    *pnumero;
    pnumero = &numero;
    printf("El contenido de lo que apunta el puntero: %d\n",*pnumero);
    printf("La direccion de memoria almacenada por el puntero: %p\n", pnumero); 
    printf("La direccion de memoria de la vble: %p\n", &numero);
    printf("La direccion de memoria del puntero: %p\n", &pnumero);
    printf("Tamaño de memoria utilizado por esa variable usando la función sizeof(): %d bytes\n", sizeof(numero));
return 0;
}
