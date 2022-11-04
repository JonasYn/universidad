// Dada una matriz de 3 filas por 4 columnas, calcular la sumatoria de sus elementos:

#include <stdio.h>
#include <stdlib.h>
#define m 3
#define n 4

int sumatoria (int matriz[m][n]);

int main (){

 int resultado = 0;
 int matriz [m] [n] ={{5, 7, 3, 9},{2, 3, 4, 1},{8, 6, 4, 2}};

 resultado = (sumatoria(matriz));
 printf ("%i", resultado);

 return 0;
}

int sumatoria (int matriz[m][n]){
 int resultado = 0;
 int i,j,k;

 for (i = 0 ; i < m ; i++){
     for (j = 0 ; j< n ; j++){
        resultado += matriz[i][j];
     }
 }
 


 return resultado;
}