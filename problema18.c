/*
  Faustino Aguilar, 2015
  Problema 18:
  Construya un programa que lea n valores y que coloque cada valor en la posición indicada por el valor. Considere excepciones.
*/

#include "stdio.h"
#include "stdlib.h"

int main() {
  int vector[5], i, n, valor;
  n = sizeof (vector) / sizeof (vector[0]);
  for (i = 0; i < n; i++) {
    printf("Escriba el %d° valor (0 y %d): ", i+1, n-1);
    scanf("%d", &valor);
    if (valor < 0 || valor > 9) {
      printf("Inserte un valor entre 0 y %d\n", n-1);
      i--;
    } else {
      vector[valor] = valor;
    }
  }
  printf("Vector = [ ");
  for (i = 0; i < n; i++){
    printf("%d ", vector[i]);
  }
  printf("]\n");
  return 0;
}
