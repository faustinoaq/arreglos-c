/*
  Faustino Aguilar, 2015
  Problema 6:
  Elabore un programa que determine el mayor elemento de un vector, asuma que el vector ya fue leído, es decir, está en memoria.
*/

#include "stdio.h"
#include "time.h"
#include "stdlib.h"

int main() {
  printf("Vector = [ ");
  int i, n=10, vector[10];
  srand(time(NULL));
  for (i = 0; i < n; i++) {
    vector[i] = random() % 10;  // 0 al 9
    printf("%d ", vector[i]);
  }
  printf("]\n");
  int mayor=vector[0];
  for (i = 1; i < n; i++) {
    if (mayor < vector[i]) {
      mayor = vector[i];
    }
  }
  printf("El mayor valor del vector es %d\n", mayor);
  return 0;
}
