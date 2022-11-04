/*
Nombre de archivo: hw3.c (No cambiar el nombre de este archivo)
El repositorio donde esta tu HW3 es: github.com/unlu-edu-ar/prog1-2022-hw-3-TuNombreDeUsuarioGithub
Importante: No cambiar el nombre del archivo

Completa con tu nombre, apellido y DNI
Nombre y Apellido: 
DNI: 
*/
 
 /* 
 Se disponen de archivos de texto, donde se guardan los datos del clima. 
 Cada linea de un archivo de clima se corresponde a un dia del anio. 
 Los datos en cada linea estan separados por tabuladores (a los archivos de texto 
 que tienen los datos separados por tabuladores, se los acostumbra guardar con 
 la extension .tsv, que viene del ingles tab separated values).
 Los datos guardados en cada linea son numeros enteros, y estan en el siguiente orden:
 - dia
 - mes
 - anio 
 - cantidad de lluvia caida 
 - temperatura minima
 - temperatura maxima

 Nota: para evitar errores de incompatilidades, no hemos puesto tildes, ni caracteres
 propios del lenguaje castellano.
 */

#include <stdio.h>

/* 
Programe una funcion que recibe los datos de un archivo de clima, y un mes, 
y devuelva cuantos dias hubo sin lluvias en ese mes.
INPUT: fp (puntero a archivo), mes (int)
OUTPUT: sin_lluvias (int)
*/

int sin_lluvias(FILE* fp, int mes){ 
	fp = fopen("datos_lluvia_temp.tsv", "r");
	rewind(fp);
	int es_dia, es_mes, es_anio, cantidad_lluvia, temp_min, temp_max;
	int llovio=0;
	fscanf(fp,"%i %i %i %i %i %i",&es_dia, &es_mes, &es_anio, &cantidad_lluvia, &temp_min, &temp_max);

	while(!feof(fp)){
		if(es_mes == mes){
			if (cantidad_lluvia == 0){
                llovio++;
			}
		}
	 fscanf(fp,"%i %i %i %i %i %i",&es_dia, &es_mes, &es_anio, &cantidad_lluvia, &temp_min, &temp_max);
	}
	// Programar la funcion aqui
	fclose(fp);
	return llovio;
}

/* 
Programe una funcion que recibe los datos de un archivo de clima, y devuelva cuantos dias 
llovio menos de x mm, y cuantos dias llovio x mm o mas que x mm, en el anio.
INPUT: fp (puntero a archivo), x (int), lluvias_menor_x (int*), lluvias_mayorigual_x (int*)  
OUTPUT: void
*/

void llovio_umbral(FILE* fp, int x, int* lluvias_menor_x, int* lluvias_mayorigual_x){ 
	// Programar la funcion aqui
	fp = fopen("datos_lluvia_temp.tsv", "r");
	rewind(fp);
	int lluvias_menor =0;
	int lluvias_mayorigual=0;
	int es_dia, es_mes, es_anio, cantidad_lluvia, temp_min, temp_max;
	fscanf(fp, "%i %i %i %i %i %i", &es_dia, &es_mes, &es_anio, &cantidad_lluvia, &temp_min, &temp_max);
	while(!feof(fp)){
		if (cantidad_lluvia >= x){
			lluvias_mayorigual ++;
			*lluvias_mayorigual_x = lluvias_mayorigual;
		}
		else{
			lluvias_menor ++;
			*lluvias_menor_x = lluvias_menor;
		}
		fscanf(fp, "%i %i %i %i %i %i", &es_dia, &es_mes, &es_anio, &cantidad_lluvia, &temp_min, &temp_max);
	}
	fclose(fp);
}

/* 
Programe una funcion que recibe los datos de un archivo de clima, y un mes, y
devuelva cuantos dias se registro la maxima temperatura del mes. 
INPUT: fp (puntero a archivo), mes (int)
OUTPUT: cant_dias_maximo_calor (int) 
*/

int contador_dias_maximo_calor(FILE* fp, int mes){ 
 fp = fopen("datos_lluvia_temp.tsv", "r");
 rewind(fp);
 int es_dia, es_mes, es_anio, cantidad_lluvia, temp_min, temp_max;
 fscanf(fp, "%i %i %i %i %i %i", &es_dia, &es_mes, &es_anio, &cantidad_lluvia, &temp_min, &temp_max);
 int dia_mas_calor = temp_max;
 int aux=0;
 while(!feof(fp)){
  if(es_mes == mes){
	 if(dia_mas_calor<temp_max){
		dia_mas_calor = temp_max;
	 }
  }
  fscanf(fp, "%i %i %i %i %i %i", &es_dia, &es_mes, &es_anio, &cantidad_lluvia, &temp_min, &temp_max);
 }
 rewind(fp);
 fscanf(fp, "%i %i %i %i %i %i", &es_dia, &es_mes, &es_anio, &cantidad_lluvia, &temp_min, &temp_max);
 while(!feof(fp)){
	if (es_mes==mes){
       if (dia_mas_calor == temp_max){
        aux ++;
         }
  }
  fscanf(fp, "%i %i %i %i %i %i", &es_dia, &es_mes, &es_anio, &cantidad_lluvia, &temp_min, &temp_max);
 }
 fclose(fp);
 return aux;
	// Programar la funcion aqui
}

/* 
Programe una funcion que recibe los datos de un archivo de clima, y un mes, y
devuelva el dia donde se registro la minima temperatura del mes y cual fue dicha temperatura. 
En el caso de haber varios dias con temperatura minima, debe devolver el primer dia.
INPUT: fp (puntero a archivo), mes (int), dia (int*), temp_minima (int*)  
OUTPUT: void
*/

void dia_mas_frio_mes(FILE* fp, int mes, int* dia, int* temp_minima){ 
  fp = fopen("datos_lluvia_temp.tsv", "r");
  rewind(fp);
 int es_dia, es_mes, es_anio, cantidad_lluvia, temp_min, temp_max;
 fscanf(fp, "%i %i %i %i %i %i", &es_dia, &es_mes, &es_anio, &cantidad_lluvia, &temp_min, &temp_max);
 int temp_minimo= 9999;
 int dia_min;

 while(!feof(fp)){
	if (es_mes == mes){
		if(temp_minimo> temp_min){
			temp_minimo = temp_min;
            dia_min = es_dia;
		}

	}
	fscanf(fp, "%i %i %i %i %i %i", &es_dia, &es_mes, &es_anio, &cantidad_lluvia, &temp_min, &temp_max);
 }
 *dia =dia_min;
 *temp_minima= temp_minimo;
 fclose(fp);
	// Programar la funcion aqui
}

/* 
Programe una funcion que recibe los datos de un archivo de clima, y un mes, y
devuelva el promedio de lluvias de dicho mes. 
INPUT: fp (puntero a archivo), mes (int) 
OUTPUT: promedio_lluvia (float) 
*/

float promedio_lluvias_mes(FILE* fp, int mes){ 
  fp = fopen("datos_lluvia_temp.tsv", "r");
  rewind(fp);
  int es_dia, es_mes, es_anio, cantidad_lluvia, temp_min, temp_max;
  fscanf(fp, "%i %i %i %i %i %i", &es_dia, &es_mes, &es_anio, &cantidad_lluvia, &temp_min, &temp_max);
  int total_lluvia = 0;
  int cantidad_dia =0;
  float promedio ;

  while(!feof(fp)){
	if (es_mes == mes){
       total_lluvia += cantidad_lluvia;
	   cantidad_dia ++;
	}
	fscanf(fp, "%i %i %i %i %i %i", &es_dia, &es_mes, &es_anio, &cantidad_lluvia, &temp_min, &temp_max);
  }
  fclose(fp);
  promedio = (total_lluvia/cantidad_dia);
  return promedio;
	// Programar la funcion aqui
}
