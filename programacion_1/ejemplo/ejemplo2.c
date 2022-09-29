#include <stdio.h>
#include <stdlib.h>

int suma(int numero1, int numero2){
    int resultado;
    resultado = numero1 + numero2;
    return resultado;
}

int main()
{
    int resultado = suma(5 , 5);
    printf (" %i" , resultado);
    return 0;
}