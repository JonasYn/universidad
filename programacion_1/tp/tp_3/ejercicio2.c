// Dados dos arreglos ordenados: A(n) y B(m), construir un nuevo arreglo C
// que contenga los elementos de A y de B de tal forma que quede también ordenado.
// Si existen elementos repetidos en los arreglos originales, en C deberán aparecer solamente una vez.

#include <stdio.h>
#include <stdlib.h>

int combinar_arreglos(int a[], int b[],int n,int m);
void imprimir (const int v[], int s);


int main(){

 int A [] = { 2, 5, 8 , 10,11, 25};
 int B [] = { 1, 2, 6, 7, 9, 11,13};

 int n= 6;
 int m =7;

 combinar_arreglos (A,B,n,m);

 return 0;
}

int combinar_arreglos(int a[], int b[],int n,int m){
    int c[n+m];
 
 int i = 0;
 int j = 0;
 int k = 0;

 while(i<n && j<m){
     if (a[i] <= b[j]){
         c[k]= a[i];
          i++;
    }
    else {
         c[k] = b[j];
         j++;
    }
    k++;
 }
 if (i == n){
  for (; j<m; j++){
     c[k] = b[j];
     k++;
  }
 } 
 else 
 if(j == m){
    for (; i < n; i++){
        c[k]= a[i];
        k++;
    }
 }
 imprimir(c, n+m);
}

void imprimir (const int v[], int s){
    for(int i = 0; i < s; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}