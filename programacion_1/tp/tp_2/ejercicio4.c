// Cargar un vector con 50 elementos numéricos
// y calcular la cantidad de números negativos,
// positivos y ceros que se encuentran en el vector.  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void PositivosNegativosCero(int arreglo[], int cantidad);
void NumeroMayor(int arreglo[], int cantidad);


int main(){
    int A[] = {34,-12,22,-56,0,12,0,9,-2,99};
    int cantidad_real = 10;
    PositivosNegativosCero(A, cantidad_real);
    NumeroMayor(A, cantidad_real);

 return 0;
}

void PositivosNegativosCero(int arreglo[], int cantidad){
    int mayor_a_0 = 0;
    int menor_a_0 = 0;
    int igual_a_0 = 0;
    for (int i = 0; i < cantidad; i++){
      int aux = arreglo[i];
      if (aux > 0){
        mayor_a_0 +=1;
      }
      else if(aux < 0){
        menor_a_0 += 1;
      }  
      else if(aux == 0){
        igual_a_0 +=1;
      }
    }

    printf ("la cantidad de numeros mayores a 0 son %i\n", mayor_a_0);
    printf ("la cantidad de numeros menores a 0 son %i\n", menor_a_0);
    printf ("la cantidad de numeros iguales a 0 son %i\n", igual_a_0);

}
// Realizar un programa que encuentre el mayor de los valores cargados en el problema anterior.  

void NumeroMayor(int arreglo[], int cantidad){
    int numeroMax = -999;
    for (int i = 0; i < cantidad; i++){
    int aux = arreglo[i];
    if (aux > numeroMax){
      numeroMax = aux;
    }
    }

    printf("el numero mayor es %i\n",numeroMax);

}