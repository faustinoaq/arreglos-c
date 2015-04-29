/*
  Faustino Aguilar, 2015
  Problema 9:
  Considere un vector de 34 elementos. Elabore un programa que
  coloque dichos elementos en un segundo vector, pero iniciando en la última posición.
*/

#include "stdio.h"
#include "stdlib.h"

int main() {
  printf("Vector = [ ");
  int i, n=34, vector[34], vector_inverted[34];
  for (i = 0; i < n; i++) {
    vector[i] = random() % 10;  // 0 al 9
    printf("%d ", vector[i]);
  }
  printf("]\n");
  printf("Invert = [ ");
  for (i = n-1; i >= 0; i--) {
    vector_inverted[i] = vector[i];
    printf("%d ", vector_inverted[i]);
  }
  printf("]\n");
  return 0;
}
