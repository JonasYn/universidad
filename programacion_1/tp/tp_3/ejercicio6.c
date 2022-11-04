// Escribir un algoritmo que permita procesar 2 arreglos ordenados de n elementos.
// Legajos(n) y Notas (n * 3) ya que por cada legajo hay 3 notas consecutivas.
// Se desea obtener un listado con el promedio de cada alumno.

#include <stdio.h>
#include <stdlib.h>
#define Calumnos 2

void promedioss (int legajos[], int notas[], int promedios[], int largo);
void imprimir (const int v[], int s);

int main(){

 int legajos[Calumnos] = {1,2};
 int notas[] = {7,8,6,4,5,3};
 int promedios [Calumnos] = {};
 int cantidad_notas = 6;

 promedioss (legajos,notas,promedios,cantidad_notas);

 return 0;
}

void promedioss (int legajos[], int notas[], int promedios[], int largo){
 int i,j,k;
 int aux = 0;
 int promedio = 0;
 for (i = 0 ; i < Calumnos; i++){
     for (j = 0 ; j < 3; j++){
         promedio += notas[aux];
         aux++;
     }
     promedios[k] = promedio/3;
     promedio = 0;
     k++;
 }
 imprimir (promedios, Calumnos);
}

void imprimir (const int v[], int s){
    for(int i = 0; i < s; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}