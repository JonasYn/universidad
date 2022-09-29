#include <stdio.h>
#include <stdlib.h>

int mayor(int a){
    int respuesta;
    if (a >= 0){
     respuesta = 0;
    };
    if (a <0){
        respuesta = 1;
    };
    return respuesta;
}

int main()
{int respuesta = mayor(99);
  printf ("%i", respuesta);
  return 0;
}