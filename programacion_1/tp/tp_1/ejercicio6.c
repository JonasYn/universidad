// Construir un menú que le muestre al usuario lo siguiente:
// ********* MI PROGRAMA *********
// 1. Saludar.
// 2. Informar temperatura.
// 3. Mostrar nombre de materia.
// 4. Salir.
// Seleccione una opción [1-4]:
// ● - Cuando el usuario ingrese la opción 1, se mostrará el
// mensaje: “¡Hola, bienvenido a mi programa interactivo!”.
// ● - Cuando el usuario ingrese la opción 2, se mostrará el
// mensaje “Hay una sensación térmica de 20 grados Celsius.”.
// ● - Cuando el usuario ingrese la opción 3, ¡se mostrará el
// mensaje “Estás en la materia Programación I!”.
// ● - Cuando el usuario ingrese la opción 4, el programa debe terminar,
// mostrando el mensaje “¡Hasta la próxima!”.
// ● - Si el usuario ingresa una opción inválida, se muestra el mensaje “Opción
// inválida.”
// Tip 1: crear al menos una función propia, que se encargue
// exclusivamente de mostrar el menú de opciones en pantalla.
// Tip 2: puede utilizar la instrucción system(“cls”) para limpiar la pantalla
// antes de volver a mostrar el menú. De esta manera su programa será más
// legible en la terminal.
// Tip 3: antes de limpiar la pantalla y volver a mostrar el menú, puede
// esperar a que el usuario confirme que ha terminado de leer la información
// presentada, simplemente utilizando la función:


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu(void){
 printf("********* MI PROGRAMA *********\n");
 printf("1. Saludar.\n");
 printf("2. Informar temperatura.\n");
 printf("3. Mostrar nombre de materia.\n");
 printf("4. Salir.\n");
 printf ("porfavor ingrese una de las opciones\n");
}




int main (){
    int opcion;
 while (opcion != 4){
    system("pause");
    system ("cls");
    menu();
    scanf("%i", &opcion);
    if (opcion == 1){
        printf("¡Hola, bienvenido a mi programa interactivo!");
    }
    else if (opcion == 2){
        printf ("Hay una sensación térmica de 20 grados Celsius.");
    }
    else if (opcion ==3){
        printf ("Estás en la materia Programación I!");
    }
    else if (opcion ==4){
        printf ("¡Hasta la próxima!");
    }
    else {
        printf ("Opcióninválida.");
    }
 }
return 0;
}