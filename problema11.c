/*
  Faustino Aguilar, 2015
  Problema 11:
  Considere un vector en memoria con 56 elementos. Lea n valores, determine la posición en que se encuentra cada valor leído. Una vez encontrado un valor suspenda la búsqueda y lea el siguiente valor. Determine la frecuencia de cada una de las posiciones en las cuales encontró un valor y la frecuencia de valores no encontrados.
*/

#include "time.h"
#include "stdio.h"
#include "stdlib.h"

int main() {
  int j, i, n=10, vector[56], valor, frecuencia=0;
  printf("Vector = [ ");
  srand(time(NULL));
  for (i = 0; i < 56; i++) {
    vector[i] = random() % 10;  // 0 al 9
    printf("%d ", vector[i]);
  }
  printf("]\n");
  for (i = 0; i < n; i++) {
    printf("Escribe el valor No. %d: ", i+1);
    scanf("%d", &valor);
    for (j = 0; j < 56; j++) {
      if (valor == vector[j]) {
        frecuencia++;
        printf("El valor %d se encuentra el la posición %d del vector\n", valor, j);
      }
    }
    printf("El valor %d aparece %d veces en el vector\n\n", valor, frecuencia);
    frecuencia=0;
  }
  return 0;
}
