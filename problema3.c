/*
  Faustino Aguilar, 2015
  Problema 3:
  Confeccione un programa que construya un vector de 200 posiciones de manera que cada posición del vector corresponda al triple del índice correspondiente a la posición.
*/

#include "stdio.h"
#include "stdlib.h"

int main() {
  int vector[200];
  int i, num=200;
  printf("Vector=[ ");
  for (i = 0; i < num; i++) {
    vector[i] = 3*i;  // 0 al 9
    printf("%d ", vector[i]);
  }
  printf("]\n");
  return 0;
}
