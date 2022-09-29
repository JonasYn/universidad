// Modificar el programa del ejercicio anterior para que la función devuelva,
// además del resultado de la suma, el de la resta y el del producto.


#include <stdio.h>
#include <stdlib.h>

int suma(int x,int y){
    int respuesta;
    respuesta = x + y;
    return respuesta;
}

int resta(int x,int y){
    int respuesta;
    respuesta = x - y;
    return respuesta;
}

int producto(int x,int y){
    int resultado;
    resultado = x * y;
    return resultado;
}

int main (){
    int numero1;
    int numero2;
 printf ("ingrese su primer número entre 10 y 99: ");
 scanf("%i", &numero1); 

 printf("ingrese el segundo número entre 10 y 99: ");
 scanf("%i", &numero2);

  printf("el valor de la suma es %i\n", suma(numero1,numero2));
  printf("el valor de la resta es %i\n", resta(numero1,numero2));
  printf("el valor del producto es %i\n", producto(numero1,numero2));
    return 0;
}