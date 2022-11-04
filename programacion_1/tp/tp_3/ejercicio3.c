// Realizar un algoritmo que permita cargar dos arreglos de n elementos:
// Legajo (n) y Calificación (n). Ordenarlos en forma ascendente y generar un listado.

#include <stdio.h>
#include <stdlib.h>

void ordenar(int legajo[], int calificacion[],int cantidad);
void mostrar(int * matriz, int cantidad);

int main(){
 
 int n= 4;
 int  LEGAJO []= {5645, 154582, 6852, 12366};
 int CALIFICACION[]= {4, 5, 10, 9};

 ordenar(LEGAJO,CALIFICACION,n);
 mostrar (LEGAJO,n);
 mostrar (CALIFICACION,n);


 return 0;
}

void ordenar(int legajo[], int calificacion[],int cantidad){
 int i, j, aux, aux2;
    for (i = 0; i < cantidad-1; i++)
        for (j = i+1; j < cantidad; j++)
            if (legajo[i] > legajo[j]) {
                /* Intercambio */
                aux = legajo[i];
                legajo[i] = legajo[j];
                legajo[j] = aux;
                aux2 = calificacion[i];
                calificacion[i] = calificacion[j];
                calificacion[j] = aux2;
                
            }
}


void mostrar(int * matriz, int cantidad){
    for (int i = 0; i < cantidad; i++)
    {
        printf("%i ", matriz[i]);
    }
    printf("\n");}