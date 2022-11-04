// Leer una matriz de tres filas por tres columnas y calcular la suma
// de cada una de sus filas y de sus columnas, colocando los resultados
// en dos vectores, uno para la suma de las filas y otro para la suma de las columnas.

#include <stdio.h>
#include <stdlib.h>
#define m 3
void SumarFilas (int matriz[m][m], int f[]);
void SumarColumnas (int matriz[m][m], int c[]);
void imprimir (const int v[], int s);


int main (){
 
 int matriz [m][m] = {{5,7,3},{2,3,4},{8,6,4}};
 int f[m] = {};
 int c[m] = {};

 SumarFilas (matriz,f);
 SumarColumnas(matriz,c);

 imprimir (f,m);
 imprimir (c,m);

 return 0;
}

void SumarFilas (int matriz[m][m], int f[]){
 int i,j;
 int k=0;

 for (i = 0 ; i < m ; i++){
     for (j = 0 ; j < m ; j++){
         f[k] += matriz[i][j];
         }
     k++;
 }
}

void SumarColumnas (int matriz[m][m], int c[]){
 int i,j;
 int k = 0;
 for (i = 0 ; i < m ; i++){
     for (j = 0 ; j < m ; j++){
         c[k] +=matriz[j][i];
         }
     k++;
 }
}

void imprimir (const int v[], int s){
    for(int i = 0; i < s; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}