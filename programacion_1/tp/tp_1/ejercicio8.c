// Modifique el programa anterior para que el usuario ingrese distintos tipos
// de bombas hasta que indique el fin del proceso al ingresar el valor 9


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

while (tipo_bomba != 9)
{

 printf ("por favor ingrese el tipo de bomba: ");
scanf ("%i", &tipo_bomba);

switch (tipo_bomba)
  {
case 0: printf("No hay establecido un valor definido para el tipo de bomba\n");
    break;    

case 1: printf ("La bomba es una bomba de agua\n");
   break;

case 2: printf ("La bomba es una bomba de gasolina\n");
   break;

case 3: printf ("La bomba es una bomba de hormigón\n");
   break;

case 4: printf ("La bomba es una bomba de pasta alimenticia\n");
   break;

default: printf ("No existe un valor valido para tipo de bomba\n");
    break;
}
}

}