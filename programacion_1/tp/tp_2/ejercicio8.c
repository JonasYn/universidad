// Realizar una función que determine si dos vectores cargados
// con números naturales, de igual cantidad de elementos, son idénticos.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void identicos (int arreglo1[], int arreglo2[], int valor);

int main(){
 int vectorA[MAX] = {1,2,3,9,4,8,5,7,6,10};
 int vectorB[MAX] = {1,2,3,9,4,8,5,7,6,10};
 int valor_real = 10;
 identicos (vectorA, vectorB, valor_real);

 return 0;
}

void identicos (int arreglo1[], int arreglo2[], int valor){
    int aux = 0;
 for (int i= 0; i < valor; i++){
    if (arreglo1[i] == arreglo2[i]){
        aux++;
    }
 }
 if (aux == valor){
    printf("los vectores son identicos");
 }
 else{
    printf("los vectores no son identicos");
 }
}