// Se tienen dos arreglos  de números enteros, ordenados de mayor a menor,
// de n elementos cada uno: A(n) y B(n). Se pide realizar un algoritmo que
// permita obtener un  nuevo arreglo C, que contenga únicamente  los elementos
// iguales que existan en los dos y no pueden estar repetidos.

#include <stdio.h>
#include <stdlib.h>

void repetidos(int arregloA[], int arregloB[], int arregloC[], int largo);
void imprimir (const int v[], int s);


int main (){

 int arregloA[] = {2,4,6,8,9};
 int arregloB[] = {1,4,5,7,9};
 int arregloC[] = {};
 int largo = 5;


 repetidos(arregloA, arregloB, arregloC, largo);

 return 0;
}

void repetidos(int arregloA[], int arregloB[], int arregloC[], int largo){
 int i,j;
 int k = 0;
 for (i=0 ; i < largo ; i++){
     for (j=0 ; j< largo ; j++){
        if (arregloA[i] == arregloB [j]){
            arregloC[k] = arregloA[i];
            k++; 
        }
     }
 }

 imprimir(arregloC, k);
}

void imprimir (const int v[], int s){
    for(int i = 0; i < s; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}