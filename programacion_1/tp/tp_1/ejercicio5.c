// Escribir un programa que procese las notas de los dos parciales de los 300
// alumnos de Programación 1. Como resultado, se le debe informar a cada
// alumno su situación, junto con la nota promedio. Las reglas para saber la
// situación de un alumno son las siguientes:
// • Para estar promovido (es decir, cursada aprobada y no requiere
// rendir final), el alumno debe haber aprobado ambos parciales y
// tener un promedio mayor o igual a 7.
// • Para estar regular (cursada aprobada, pero debe rendir final), el
// alumno debe haber aprobado ambos parciales (nota mayor o
// igual a 4).
// • Si el alumno no ha aprobado ambos parciales (es decir, tiene nota
// menor que 4 en alguno de ellos), entonces queda en condición
// de libre (es decir, puede rendir un final extendido o recursar).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int situacion(int x, int y){
    int acumulador;
    int promedio;
    char nota;
    acumulador = 1;

    for (acumulador; acumulador <=300 ; acumulador++){
     promedio = (x + y) /2;

    if (promedio >= 7){
     printf ( "promovido\n");
    }
     
    else if (promedio >= 4 && promedio < 7){
     printf("regular\n");
    }
    
    else{
        printf ("libre\n");   
     }
    };
    return nota;
    
}


int main(){
situacion ( 4 , 2);

    return 0;
}
