// Escribir una función que reciba un arreglo de caracteres
// e indique si se encuentran ordenados de menor a mayor o no

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char ordenamiento(char a[],int valor);

int main (){

 char * A []  = {"a","c","g","j","p","z"};
 int valor_real = 6;

 printf ("%c", ordenamiento(*A, valor_real));

 return 0;
}

char ordenamiento(char a[],int valor) {
int aux = 0;
int aux1 = 0;
int aux2 = 2;

for (int i= 0 ; i < valor-1; i++){
    if (a[aux1]< a[aux2]){
        aux++;
    }
    aux1 += 2;
    aux2 += 2;
 
}
if (aux == valor-1){
    printf("si estan ordenados");
}
else {
    printf ("no estan ordenados");
}

}