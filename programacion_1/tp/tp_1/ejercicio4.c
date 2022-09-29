// Escribir un programa que pida tres cadenas al usuario y muestre el
// resultado de concatenar las tres primeras letras de las cadenas
// introducidas y que indique si las dos primeras cadenas son iguales.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char cadena1[25];
    char cadena2[25];
    char cadena3[25];

    printf ("porfavor ingrese la primer cadena\n");
     scanf ("%s", &cadena1);
    printf ("porfavor ingrese la segunda cadena\n");
     scanf ("%s", &cadena2);
    printf ("porfavor ingrese la tercer cadena\n");
     scanf ("%s", &cadena3);


 printf ("%c%c%c\n", cadena1[0], cadena2[0], cadena3[0]);

 if (*cadena1 == *cadena2){
    printf("%c %c son iguales\n", cadena1, cadena2);
    }

    return 0;
}   

