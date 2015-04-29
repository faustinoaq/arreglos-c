/*
  Faustino Aguilar, 2015
  Problema 1:
  Construya un programa que determine la
  frecuencia de un valor leído, en un vector de 30 elementos.
*/

#include "stdio.h"
#include "time.h"
#include "stdlib.h"

int main() {
  int i, vector[30], valor, frecuencia=0;
  printf("Escriba un valor entero: ");
  scanf("%d", &valor);
  // Rellena el vector
  printf("Vector: [");
  srand(time(NULL));
  for (i = 0; i < 30; i++) {
    vector[i] = rand() % 10;  // 0 al 9
    printf("%d ", vector[i]);
  }
  printf("]\n");
  for (i = 0; i < 30; i++) {
    if (valor == vector[i]) {
      frecuencia++;
    }
  }
  if (frecuencia > 1) {
    printf("El valor %d aparece %d veces en el vector\n", valor, frecuencia);
  } else if (frecuencia == 1) {
    printf("El valor %d aparece 1 vez en el vector\n", valor);
  } else {
    printf("El valor %d no aparece en el vector\n", valor);
  }
  return 0;
}
