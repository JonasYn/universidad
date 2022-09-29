
// Dado un arreglo de N elementos, escribir un programa
// que permita desplazar los elementos del arreglo una posición a la derecha,
// de tal forma que el primero pase a la segunda posición,
// el segundo a la tercera y así sucesivamente.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void cambiar_numeros(int arrgelo[], int cantidad);
void imprimir (const int v[], int s);

int main (){
 int A [] = {5,3,4,7,8,9,1,6,2};
 
 int cantidad_real = 9;
 imprimir (A, cantidad_real);
 cambiar_numeros(A, cantidad_real);

 
 return 0;
}

void imprimir (const int v[], int s){
    for(int i = 0; i < s; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}


void cambiar_numeros(int arrgelo[], int cantidad){
   int arrgelo_auxiliar[9];
   int aux= 0;
    for (int i= 0 ; i < cantidad; i++){
    if (i == 0){
      arrgelo_auxiliar[i] = arrgelo[8];

    }
    else {
      arrgelo_auxiliar[i] = arrgelo[aux];
      aux += 1;
    }
   
    
    }
   imprimir( arrgelo_auxiliar, cantidad);
}