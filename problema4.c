/*
  Faustino Aguilar, 2015
  Problema 4:
  Construya un programa que lea n valores y que los despliegue en el orden inverso en que fueron leídos.
*/

#include "stdio.h"
#include "stdlib.h"

int main() {
  int i, n=10, vector[10];
  for (i = 0; i < n; i++) {
    printf("Escriba el valor No. %i: ", i+1);
    scanf("%d", &vector[i]);
  }
  printf("Valores en orden inverso:\n");
  for (i = n-1; 0 <= i; i--) {
    printf("%d\n", vector[i]);
  }
  return 0;
}
