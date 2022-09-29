// Escribir una función que acepte como parámetro un vector que contiene
// números positivos, que puede contener valores duplicados, y reemplace
// cada elemento repetido por -1 (menos uno).  El procedimiento debe retornar
// el vector modificado y la cantidad de veces que fue modificado.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

void modificar(int arreglo[], int valor);

int main(){
 
 int vector[] = {1,4,8,2,5,4,9,8,6,2};
 int valor_real = 10;
 modificar (vector, valor_real);

 return 0;
}

void modificar(int arreglo[], int valor){
    int var_auxiliar [MAX];
 for(int i = 0; i < valor; i++){
    var_auxiliar[i] = arreglo[i];
    for (int x = i ; x < valor; x++){
        if (arreglo[valor-1-i] == arreglo[x+1]){
           var_auxiliar[i] = -1;
        }
    }
 }
 printf ("%d", var_auxiliar);
}