// Dados dos arreglos de 120 elementos cada uno cargados aleatoriamente entre 1 y 1000,
// hallar la suma de los elementos que ocupan las posiciones pares del primero con los elementos
// que ocupan las impares del segundo.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void Carga_Aleatoria(int arreglo[], int cantiad);
int suma (int a[],int b[], int cantidad);
void imprimir (const int v[], int s);


int main (void){

   int vector_a[MAX];
   int vector_b[MAX];
   int par[MAX];  

   int CantidadReal = 10;
   srand(time(NULL));

   Carga_Aleatoria(vector_a, CantidadReal);
   Carga_Aleatoria(vector_b, CantidadReal);
   printf("%i\n", suma(vector_a, vector_b, CantidadReal));
   imprimir(vector_a,CantidadReal);
   imprimir(vector_b,CantidadReal);


    return 0;
}

void Carga_Aleatoria(int arreglo[], int cantiad){
    for ( int i=0 ; i<cantiad ; i++){
        arreglo[i] = rand() % 1000;
    }
}

int suma (int arregloA[],int arregloB[], int cantidad){
 int resultado = 0;
    resultado += arregloA[2]+ arregloA[4]+ arregloA[6]+ arregloA[8];
    resultado += arregloB[1]+ arregloB[3]+ arregloB[5]+ arregloB[7]+ arregloB[9];

   return resultado;
  
}

void imprimir (const int v[], int s){
    for(int i = 0; i < s; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

