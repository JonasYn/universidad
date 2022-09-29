#include <stdio.h>
#include <stdlib.h>




int intervalo(int a, int b){
    int i;
    i = a;
    int sumatoria_intervalos;
    sumatoria_intervalos = 0;
 while (i <= b) {
 sumatoria_intervalos+= i;
 i += 1;}
 
 return sumatoria_intervalos;
}


int main(){
   int respuesta = intervalo(1, 3);
   printf ("%i" , respuesta);
    return 0;
}