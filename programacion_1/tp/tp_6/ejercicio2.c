// En una estación meteorológica se registra diariamente la temperatura máxima y mínima
// de todo un año con el siguiente diseño: Día-Mes-Anio-Temperatura_Maxima-Temperatura_Minima
// (éstos dos últimos se pueden generar aleatoriamente).
// Preparar un algoritmo con los procedimientos necesarios para: 
// a) cargar los datos correspondientes a todos los días del corriente año en un archivo llamado
// “ temperaturas.txt”. 
// b) imprima por pantalla un reporte como el siguiente;

#include <stdio.h>
#include <stdlib.h>

void cargar_datos(FILE* fp);
void temperatura_minima_maxima (FILE* fp);

int main(){

 FILE* fp;

 cargar_datos(fp);
 temperatura_minima_maxima(fp);

 return 0;
}

void cargar_datos(FILE* fp){
 
 int dia,mes,anio,temperatura_maxima,temperatura_minima;
 
 fp = fopen ("temperaturas.txt", "w");

 for (int i=0; i < 3; i++){
 printf("ingrese el dia: ");
 scanf("%i", &dia);

 printf("ingrese el mes: ");
 scanf("%i", &mes);

 printf("ingrese el anio: ");
 scanf("%i", &anio);

 printf("ingrese la temperatura minima: ");
 scanf("%i", &temperatura_minima);

 printf("ingrese la temperatura maxima: ");
 scanf("%i", &temperatura_maxima);

 fprintf(fp, "%i\t", dia);
 fprintf(fp, "%i\t", mes);
 fprintf(fp, "%i\t", anio);
 fprintf(fp, "%i\t", temperatura_minima);
 fprintf(fp, "%i\n", temperatura_maxima);
 }
 fclose(fp);
}

void temperatura_minima_maxima (FILE* fp){
    
 fp = fopen ("temperaturas.txt", "r");
  rewind(fp);
 int dia, mes, anio, tem_min, tem_max;
 int aux_min, aux_max;
 int dia_min, mes_min;
 int dia_max, mes_max;

 fscanf(fp,"%i %i %i %i %i",&dia, &mes, &anio, &tem_min, &tem_max);
 aux_min = tem_min;
 aux_max = tem_max;
 dia_min = dia;
 mes_min = mes;  
 dia_max= dia;
 mes_max= mes;

 while (!feof(fp))
 {
    if(aux_min > tem_min){
        aux_min = tem_min;
        dia_min = dia;
        mes_min = mes;
    }

    if(aux_max < tem_max){
        aux_max = tem_max;
        dia_max= dia;
        mes_max= mes;
    }

 fscanf(fp,"%i %i %i %i %i",&dia, &mes, &anio, &tem_min, &tem_max);
 }
 
 printf ("temperatura minima del anio: %i\n", aux_min);
 printf ("registrado el dia: %i\n", dia_min);
 printf ("del mes %i\n", mes_min);

 printf ("temperatura maxima del anio: %i\n", aux_max);
 printf ("registrado el dia: %i\n", dia_max);
 printf ("del mes %i\n", mes_max);

 fclose(fp);

}