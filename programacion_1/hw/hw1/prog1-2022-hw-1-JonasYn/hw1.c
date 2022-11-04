/*
Nombre de archivo: hw1.c (No cambiar el nombre de este archivo)
El repositorio donde esta tu HW1 es: github.com/unlu-edu-ar/prog1-2022-hw-1-TuNombreDeUsuarioGithub
Importante: No cambiar el nombre del archivo

Completa con tu nombre, apellido y DNI
Nombre y Apellido:Jonas Ynsaurralde
DNI: 
*/

/* Programe una funcion que recibe como parametros un vector v 
de numeros enteros, su cantidad de elementos n, y un entero k, 
y devuelve la cantidad de apariciones de k en v.
*/

int apariciones(int v[], int n, int k){
   int repeticiones = 0;
   for(int i = 0; i < n; i++){
    if (v[i] == k){
      repeticiones += 1;
    }
   }
   //Escribir aca el codigo de la funcion apariciones
 return repeticiones;
}

/* Programe una funcion que reciba como parametro un vector v 
de numeros enteros mayores o iguales a cero, y su cantidad de 
elementos n, y retorne el mayor elemento del vector.
 */
int mayor(int v[], int n){
   int mayor_elemento= -999;
   for(int i = 0; i < n; i++){
     int aux = v[i];
     if (aux > mayor_elemento) {
      mayor_elemento = aux;
     }
   }
   //Escribir aca el codigo de la funcion mayor
 return mayor_elemento;
}

/* Programe una funcion que reciba como parametros dos vectores de 
numeros enteros v1 y v2, y su longitud n (los vectores tienen igual
longitud), y devuelva 1 si v2 es el orden reverso de v1, y 0 si no. 
Ejemplo: 
Si v1 = {3,4,1} su reverso es v2 = {1,4,3}, y la funcion retorna 1.
 */
int reverso(int v1[], int v2[], int n){
   //Escribir aca el codigo de la funcion reverso
  int igual = 0;
  int i;
  int respuesta;
  for (i =0; i<= n; i++){
   if (v1[i] == v2[n-i-1]){
     igual++;}}
  if (igual == n){
    respuesta= 1;
  }
  else{
    respuesta=0;
  }
return respuesta;
}

/* Programe una funcion que recibe un vector v de numeros enteros, 
y su longitud n, y devuelve 1 si esta ordenado (ya sea creciente o 
decrecientemente), y 0 si no.
Ejemplo:
{1,1,2} esta ordenado en forma ascendente y retorna 1.
{6,4} esta ordenado en forma descendente y retorna 1.
{1,3,2} esta desordenado y retorna 0.
*/
int ordenado(int v[], int n){
   //Escribir aca el codigo de la funcion ordenado
int i;
int respuesta;
int auxiliar = 0;
int auxiliar2 = 0;

for (i=0;i<n-1;i++){
  if (v[i] <= v[i+1]){
    auxiliar +=1;
  }
  else if(v[i] >= v[i+1]){
    auxiliar2 +=1;
  }
}
if (auxiliar == n-1){
  respuesta = 1;
}
else if (auxiliar2 == n-1){
  respuesta = 1;
}
else if (n == 1){
  respuesta = 1;
}
else {
  respuesta = 0;
}
return respuesta;
}
