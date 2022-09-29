// Crear un programa donde se solicite al usuario que introduzca el tipo de
// bomba para una máquina, pudiendo introducir valores enteros
// comprendidos entre 0 y 4. Según el valor introducido por el usuario debe
// mostrarse el siguiente resultado usando un condicional switch:
// ● Si el tipo de bomba es 0, mostrar un mensaje por consola indicando “No
// hay establecido un valor definido para el tipo de bomba”.
// ● Si el tipo de bomba es 1, mostrar un mensaje por consola indicando “La
// bomba es una bomba de agua”.
// ● Si el tipo de bomba es 2, mostrar un mensaje por consola indicando “La
// bomba es una bomba de gasolina”.
// ● Si el tipo de bomba es 3, mostrar un mensaje por consola indicando “La
// bomba es una bomba de hormigón”.
// ● Si el tipo de bomba es 4, mostrar un mensaje por consola indicando “La
// bomba es una bomba de pasta alimenticia”.
// ● Si no se cumple ninguno de los valores anteriores mostrar el mensaje “No
// existe un valor válido para tipo de bomba”.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu();

int main(){
 menu();
    return 0;
}

void menu(){
   int tipo_bomba;
  printf ("por favor ingrese el tipo de bomba: ");
  scanf ("%i", &tipo_bomba);

switch (tipo_bomba)
  {
case 0: printf("No hay establecido un valor definido para el tipo de bomba");
    break;    

case 1: printf ("La bomba es una bomba de agua");
   break;

case 2: printf ("La bomba es una bomba de gasolina");
   break;

case 3: printf ("La bomba es una bomba de hormigón");
   break;

case 4: printf ("La bomba es una bomba de pasta alimenticia");
   break;

default: printf ("No existe un valor valido para tipo de bomba");
    break;
  }


}