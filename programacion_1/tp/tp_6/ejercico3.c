// Utilizando el mismo archivo generado en el punto anterior, preparar un procedimiento
// que permita leer los datos y generar otro archivo(“temp_media.txt”), que contenga las
// temperaturas medias diarias con el siguiente formato
// 01 -01 - 2021 - 24.5
// 02 -01 - 2021 - 22


#include <stdio.h>
#include <stdlib.h>

void temperaura_media (FILE* fp);

int main (){
 
 FILE* fp;

 temperaura_media (fp);

 return 0;
}

void temperaura_media (FILE* fp){

 fp = fopen ("temperaturas.txt", "r");
 rewind (fp);

 int dia, mes, anio, temp_min, temp_max;

 fscanf(fp, "%i %i %i %i %i", &dia, &mes, &anio, &temp_min, &temp_max);
    FILE* fp2;
    fp2 = fopen("temp_media.txt", "w");

 while(!feof(fp)){

  fprintf(fp2,"%i\t", dia);
  fprintf(fp2,"%i\t", mes);
  fprintf(fp2,"%i\t", anio);
  fprintf(fp2,"%i\n", ((temp_max+temp_min)/2));

  fscanf(fp, "%i %i %i %i %i", &dia, &mes, &anio, &temp_min, &temp_max);
 }
 fclose(fp2);
 fclose(fp);
}