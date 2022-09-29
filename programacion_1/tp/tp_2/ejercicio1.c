// Dados dos vectores A y B de igual cantidad de elementos con números entre 1 y 12 cargados aleatoriamente,
//  obtener el producto escalar: Σ A(i) * B(i). 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void CargaAleatoria(int arreglo[], int cantidad);
int ProductoEscalar(int arreglo1[], int arreglo2[], int cantidad);
void imprimir (const int v[], int s);

int main(void){

    int vector_a[MAX];
    int vector_b[MAX];

    int cantidad_real = 10;
    srand(time(NULL));
    CargaAleatoria(vector_a, cantidad_real);
    CargaAleatoria(vector_b, cantidad_real);
    printf ("%i\n", ProductoEscalar(vector_a, vector_b, cantidad_real));
    imprimir(vector_a,cantidad_real);
    imprimir(vector_b,cantidad_real);

    return 0;
}

void CargaAleatoria(int arreglo[], int cantidad){
    for(int i = 0; i < cantidad; i++){
        arreglo[i] = rand() % 12;
    }
}

int ProductoEscalar(int arreglo1[], int arreglo2[], int cantidad){
    int resultado= 0;
    for(int i = 0; i < cantidad; i++){
     resultado += arreglo1[i] * arreglo2[i];
    }
    return resultado;
}

void imprimir (const int v[], int s){
    for(int i = 0; i < s; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}
