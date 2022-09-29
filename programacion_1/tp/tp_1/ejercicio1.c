//Crear una función que reciba dos números como parámetros, ingresados
//por teclado, realice la suma aritmética de ambos y retorne el resultado
//que será luego mostrado por pantalla. Los números ingresados deben ser
//enteros en un rango entre 10 y 99.

#include <stdio.h>
#include <stdlib.h> 

int suma(x,y){
    int respuesta;
    respuesta = x + y;
    return respuesta;
}

int main (){
    int numero1;
    int numero2;
 printf ("ingrese su primer número entre 10 y 99: ");
 scanf("%i", &numero1); 
    if (numero1 >99) (numero1 <10);{
      printf ("el valor ingresado es incorrecto debe ser entre 10 y 99: ");
      scanf("%i", &numero1);
     }
 printf("ingrese el segundo número entre 10 y 99: ");
 scanf("%i", &numero2);
    if (numero2 > 99) (numero1 < 10);{
      printf ("el valor ingresado es incorrecto debe ser entre 10 y 99: ");
       scanf("%i", &numero2);
     }

  printf("el valor de la suma es %i", suma(numero1,numero2));


    return 0;
}