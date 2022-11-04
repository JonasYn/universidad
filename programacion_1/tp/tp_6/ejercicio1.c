// En un archivo secuencial (de texto, por ejemplo “lluvias.txt”) se almacenan datos
// sobre la lluvia caída en un cierto período. Cada línea corresponde a un día y contiene
// los siguientes datos: 
// Día-Mes-Anio-Precipitaciones (0 si no llovió)  
// Preparar un algoritmo con los procedimientos necesarios para: 
// a) cargar los datos correspondientes a los 30 días del mes de septiembre del corriente año. 
// b) leer el archivo e informar por pantalla:cuántos días hubo sin lluvias, cuántos días llovió  
// menos de 50 mm y cuántos llovió 50 mm ó más.


#include <stdio.h>
#include <stdlib.h>

void dias_lluvia(FILE* fp);

int main(){

 int cargar=0;
 FILE* fp;
 fp = fopen ("lluvia.txt", "w");

 for (int i=0; i<10; i++){
     fprintf(fp,"%i\t", (i+1));
     fprintf(fp,"%i\t", 9);
     fprintf(fp,"%i\t", 2022);
     printf("ingrese la cantidad que llovio: ");
     scanf ("%i", &cargar);
     feof(fp);
     fprintf(fp, "%i\n", cargar);
    
 }
 fclose(fp);

dias_lluvia(fp);
 return 0;
}

void dias_lluvia(FILE* fp){
 
 int dia, mes, anio, presipitacion;
 int llovio_mas =0;
 int llovio_menos=0;
 int no_llovio=0;
 fp = fopen ("lluvia.txt", "r");
 fscanf (fp,"%i %i %i %i", &dia, &mes, &anio, &presipitacion);
 //fgets(cadena, 20, fp);

 while (!feof(fp))
 {
   if (presipitacion>=50){
      llovio_mas ++;
   }
   else if(presipitacion<50 && presipitacion>0){
    llovio_menos++;
   }
   else if(presipitacion==0){
    no_llovio++;
   }
   fscanf (fp,"%i %i %i %i", &dia, &mes, &anio, &presipitacion);
    }
    
   // fgets(cadena, 20, fp);

 printf ("los dias que llovieron mas de 50 mm son %i los dias que llovio menos de 50 mm son %i los dias que no llovio son %i",llovio_mas,llovio_menos,no_llovio);
 
 fclose(fp);
}