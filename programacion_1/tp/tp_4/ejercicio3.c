// Realizar un programa que, dada una matriz cuadrada con valores enteros entre
// 1 y 50 (al azar), la muestra y se obtenga su traspuesta (permutación de filas
// y columnas, utilizando un procedimiento que permuta dos elementos), y la muestra nuevamente.
// M ={5, 7, 3,  m = {5, 2, 8,
//     2, 3, 4,       7, 3, 6,
//     8, 6, 4}       3, 4, 4}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define m 3

void carga_aleatoria(int matriz[m][m]);
void cambiar_posicion(int matriz[m][m], int matriz2[m][m]);
void imprimir (const int v[m][m]);

int main (){

 int matriz [m][m] = {{},{},{}};
 int matriz2 [m][m] = {{},{},{}};

 carga_aleatoria(matriz);
 cambiar_posicion(matriz,matriz2);
 imprimir(matriz);
 imprimir(matriz2);
 return 0;
}

void carga_aleatoria(int matriz[m][m]){
 int i,j;

 for (i = 0; i < m; i++){
     for (j = 0; j < m; j++){
         matriz[i][j] = rand() % 50;
     }
 }
}

void cambiar_posicion(int matriz[m][m], int matriz2[m][m]){
 int i, j;

 for (i = 0; i < m; i++){
     for (j = 0; j < m; j++){
        matriz2 [i][j] = matriz[j][i];
     }
 }
}

void imprimir (const int v[m][m]){
    for(int i = 0; i < m; i++){
        for(int j= 0; j < m; j++){
          printf("%d ", v[i][j]);
         }
         printf("\n");
    }
    printf("\n");
}