/*
  Faustino Aguilar, 2015
  Problema 12:
  A partir de un vector en memoria con 45 elementos,
  elabore un programa que mueva cada elemento
  a la posición anterior a la que se encuentra.
*/

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main() {
  printf("Vector = [ ");
  int i, n=45, vector[45], interceptor;
  srand(time(NULL));
  for (i = 0; i < n; i++) {
    vector[i] = random() % 10;  // 0 al 9
    printf("%d ", vector[i]);
  }
  printf("]\n");
  printf("\nRetrocede todos sus elementos a la posición anterior\n");
  interceptor = vector[0];
  for (i = 0; i < n; i++) {
    vector[i] = vector[i+1];
  }
  vector[44] = interceptor;
  printf("Vector = [ ");
  for (i = 0; i < n; i++) {
    printf("%d ", vector[i]);
  }
  printf("]\n");
  return 0;
}
