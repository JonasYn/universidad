// Crear un programa que solicite ingresar el nombre del usuario, y luego
// muestre en pantalla cuántas letras tiene ese nombre e imprima una por
// renglón.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   char nombre[25];
   int cantidad_de_letras;
   int i;

 printf ("por favor ingrese su nombre: ");
 scanf("%s", &nombre);

 cantidad_de_letras = strlen(nombre);

 printf ("el nombre tiene %i letras\n", cantidad_de_letras);
 for(i=0; i <=cantidad_de_letras - 1; i++){
    printf("%c \n",nombre[i]);
    }
   return 0;
}