// Se efectúa una encuesta para conocer el nivel de ocupación de los pobladores de una ciudad.
// Los encuestados contestaron los siguientes ítems:  
// - Sexo (1 varón; 2 mujer)  
// - Edad  
// - Estado civil (1 soltero; 2 casado; 3 otros)  
// - Trabaja (0 no; 1 sí)  
// - Estudia (0 no; 1 sí) .
// a) Generar un archivo con todos los datos validados  
// b) Utilizando el archivo imprimir un reporte como el siguiente:  
//         PORCENTAJES  
// • varones xx 
// • mujeres xx 
// • menores de 18 años que trabajan xx 
// • solteros xx 
// • casados xx 
// • encuestados que trabajan y estudian xx 
// • mujeres que trabajan xx 

#include <stdio.h>
#include <stdlib.h>

void cargar_encuesta(FILE* fp);
void porcentajes(FILE* fp);

int main (){
 FILE* fp;

 cargar_encuesta (fp);
 porcentajes (fp);
 return 0;
}

void cargar_encuesta(FILE* fp){

 int sexo, edad, estado_civil, trabaja, estudia;

 fp = fopen("encuesta.txt", "w");

 for (int i=0; i< 6; i++){
 printf ("por favor ingrese su sexo(1 si es varon 2 si es mujer): ");
 scanf ("%i", &sexo);

 printf ("por favor ingrese su edad: ");
 scanf ("%i", &edad);

 printf ("por favor ingrese su estado civil(1 si es solteto 2 si es casado 3 otro): ");
 scanf ("%i", &estado_civil);

 printf ("por favor ingrese si trabaja(0 no 1 si): ");
 scanf ("%i", &trabaja);

 printf ("por favor ingrese si estudia(0 no 1 si): ");
 scanf ("%i", &estudia);

 fprintf (fp, "%i\t %i\t %i\t %i\t %i\n", sexo, edad, estado_civil, trabaja, estudia);
}
fclose(fp);
}

void porcentajes(FILE* fp){
fp = fopen("encuesta.txt", "r");
int sexo, edad, estado_civil, trabaja, estudia;
int varones =0;
int mujeres =0;
int menores_trabajan =0;
int solteros =0;
int casados =0;
int trabaja_estudia =0;
int mujeres_trabajan=0;
fscanf(fp, "%i %i %i %i %i", &sexo, &edad, &estado_civil, &trabaja, &estudia);
while (!feof(fp)){
 
 if (sexo == 1){
     varones ++;
 }
 if (sexo == 2){
     mujeres ++;
         if(trabaja == 1){
            mujeres_trabajan++;
         }
 }
 if (edad < 18 && trabaja == 1){
     menores_trabajan++;
 }
 if (estado_civil == 1){
     solteros ++;
 }
 if (estado_civil == 2){
     casados++;
 }
 if (trabaja == 1 && estudia == 1){
    trabaja_estudia++;
 }

 fscanf(fp, "%i %i %i %i %i", &sexo, &edad, &estado_civil, &trabaja, &estudia);
}
printf ("la cantidad de hombres es: %i\n", varones);
printf("la cantidad de mujeres es: %i\n", mujeres);
printf("los menores de 18 que trabajan son: %i\n", menores_trabajan);
printf("la cantidad de solteros es: %i\n", solteros);
printf("la cantidad de casados es: %i\n", casados);
printf("la cantidad de personas que trabajan y estudia es de: %i\n", trabaja_estudia);
printf("la cantidad de mujeres que trabaja es de: %i\n", mujeres_trabajan);

fclose(fp);
}