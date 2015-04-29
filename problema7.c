/*
  Faustino Aguilar, 2015
  Problema 7:
  Construya un programa que lea n valores y calcule el producto de los cinco últimos y la suma de los cinco primeros.
*/

#include "stdio.h"
#include "stdlib.h"

int main() {
  int i, suma=0, producto=1, valor, n=10, vector[10];
  for (i = 0; i < n; i++) {
    printf("Escriba un valor:");
    scanf("%d", &valor);
    vector[i] = valor;
  }
  printf("Vector = [ ");
  for (i = 0; i < n; i++) {
    printf("%d ", vector[i]);
  }
  printf("]\n");
  for (i = 0; i < 5; i++) {
    suma = suma + vector[i];
  }
  printf("La suma de los 5 primeros elementos es: %d\n", suma);
  for (i = n-1; i >= n-5; i--) {
    producto = producto * vector[i];
    // printf("%d,  %d-------\n", i, vector[i]);
  }
  printf("El producto de los 5 últimos elementos es: %d\n", producto);
  return 0;
}
