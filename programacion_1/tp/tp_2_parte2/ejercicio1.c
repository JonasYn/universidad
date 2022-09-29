// Dado un arreglo de N elementos de tipo entero  
// y un número X ingresado por teclado, escribir una función que:
// Busque todos los elementos que coincidan con X
// y devuelva la cantidad de coincidencias encontradas.
// Busque la primera coincidencia del elemento en la lista
// y devuelva su posición. Si X no existe en el arreglo debe devolver -1.
// Utilizando la función anterior, busque todos los elementos que coincidan con X
// y devuelva un arreglo con las posiciones que ocupan estos elementos en el arreglo original.
// Si no hay elementos coincidentes, devolverá un arreglo vacío.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void coincidencias(int arreglo[],int valor, int x);
void posicion(int arreglo[],int valor, int x);
void imprimir (const int v[], int s);

int main (){

 int numero1;
 int arreglo[] = {1,8,4,9,4,2,8,9,7,8};
 int valor_real = 10;

 printf ("por favor ingrese el numero a buscar en el arreglo: ");
 scanf ("%i", &numero1);

 coincidencias(arreglo, valor_real, numero1);
 posicion(arreglo, valor_real, numero1);

 return 0;
}

void coincidencias(int arreglo[],int valor, int x){
 int aux = 0;
  for (int i = 0; i < valor; i++){
    if (arreglo [i] == x){
        aux ++;
    }
  }
  printf("la cantidad de veces que %i se repite es %i\n", x, aux);
}

void posicion(int arreglo[],int valor, int x){
 int primera_posicion = -1;
 int arreglo_aux[] = {0,0,0,0,0,0,0,0,0,0};
 int aux = 0;
 int aux2 = 0;
 for (int i = 0; i < valor; i++){
    if (arreglo [i] == x && primera_posicion == -1){
        primera_posicion = i;
    }
    if (arreglo [i] == x){
      arreglo_aux[aux] = i;
      aux2 ++;
      aux ++;
    }
 }
  printf("el primer numero que se repite se encuentra en la posicion %i\n", primera_posicion);
  printf ("las posiciones en las que %i se repiten son \n", x);
  imprimir (arreglo_aux, aux2);
}

void imprimir (const int v[], int s){
    for(int i = 0; i < s; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}