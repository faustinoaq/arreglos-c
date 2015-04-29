/*
  Faustino Aguilar, 2015
  Problema 5:
  Confeccione un programa que lea n valores y los coloque en las posiciones pares de un vector de capacidad 100.
*/

#include "stdio.h"
#include "stdlib.h"

int main() {
  int i, n=10, vector[10];
  for (i = 0; i < n; i++) {
    if (i % 2 == 0) {
      printf("Escriba un valor:");
      scanf("%d", &vector[i]);
    } else {
      vector[i] = 0;
    }
  }
  printf("Vector = [ ");
  for (i = 0; i < 10; i++) {
    printf("%d ", vector[i]);
  }
  printf("]\n");
  printf("Los ceros (0) indican posición vacía\n");
  return 0;
}
