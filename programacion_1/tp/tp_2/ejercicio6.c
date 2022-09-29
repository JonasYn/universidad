// Imprimir y sumar los elementos que ocupan las posiciones
// impares de una tabla numérica de 50 elementos.  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
void sumarimpares(int arreglo[], int cantidad);

int main(){
 int A[MAX]={12,34,9,3,8,5,7,11,13,21};
 int cantidad_real = 10;
 sumarimpares(A,cantidad_real);
    return 0;
}

void sumarimpares(int arreglo[], int cantidad){
    int suma=0;
    int i= 1;
    for (i ; i < cantidad; i++){
     suma += arreglo[i];
     i+=1;
    }

    printf ("la suma de las posiciones impares son %i", suma);
}