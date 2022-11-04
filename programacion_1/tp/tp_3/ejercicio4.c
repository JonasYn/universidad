// Realizar un programa que permita, a través de una función actualizar un arreglo ordenado
// de n elementos. Esta función recibe cuatro parámetros : el arreglo a actualizar, la cantidad
// de elementos, la acción a realizar que puede ser I, B o A  y  un valor entero. Si la acción
// es I deberá agregar el valor en la última posición. Si es B deberá encontrar el valor dentro
// del arreglo y borrarlo (si no lo encuentra devolver mensaje de error) y si es A deberá ingresar
// un nuevo valor en la posición que indique valor.

#include <stdio.h>
#include <stdlib.h>
#define max 10

void borrar(int arreglo[], int n, int valor, int arregloc[]);
void modificar_ultima_posicion (int arreglo[], int n, int valor);
void nuevo_elemento(int arreglo[],int n, int valor);
void imprimir (const int v[], int s);

int main(){
 
 int n = 6;
 int arreglo[] = {5, 7, 9, 11, 19, 24 };
 int arregloc[max];
 char accion [1] = "B";
 int valor = 18;

   borrar (arreglo,n,valor,arregloc);
 //  modificar_ultima_posicion(arreglo,n,valor);
 //  nuevo_elemento(arreglo,n,valor);
 imprimir (arregloc,n);

 return 0;
}


void borrar(int arreglo[], int n, int valor, int arregloc[]){
    int i;
    int j = 0;
    int aux = n;
    int aux2= 1;
 for (i = 0; i<aux; i++){
    if (arreglo[i] != valor){
        arregloc[j] = arreglo[i];
        j++;
        aux2++;
    }
   
 }
 if (aux2 > n){
        printf("error\n");
    }
}

void modificar_ultima_posicion (int arreglo[], int n, int valor){
 arreglo[n-1] = valor;
}

void nuevo_elemento (int arreglo[],int n, int valor){
 int aux;
 printf("ingrese el valor que desea agregar: ");
 scanf("%i",&aux);
 arreglo[valor]= aux;
}

void imprimir (const int v[], int s){
    for(int i = 0; i < s; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}