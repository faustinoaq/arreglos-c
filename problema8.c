/*
  Faustino Aguilar, 2015
  Problema 8:
  Un vector contiene los valores de la venta de cada mes de una compañía. Determine el porcentajede venta que representa cada mes.
*/

#include "stdio.h"
#include "time.h"
#include "stdlib.h"

int main() {
  printf("Ventas en:\n");
  int i, n=12;
  float vector[12];
  srand(time(NULL));
  for (i = 0; i < n; i++) {
    vector[i] = random() / 10000;  // 0 al 9
    printf("Mes %d: $ %.2f\n", i+1, vector[i]);
  }
  float mayor_venta=vector[0];
  int mayor_mes=0;
  for (i = 1; i < n; i++) {
    if (mayor_venta < vector[i]) {
      mayor_venta = vector[i];
      mayor_mes = i;
    }
  }
  printf("La mayor venta fue de $ %.2f en el mes %d\n", mayor_venta, mayor_mes+1);
  printf("\nPorcentajes de venta por mes:\n");
  for (i = 0; i < n; i++) {
    printf("Mes %d: $ %.2f%%\n", i+1, (vector[i]*100)/mayor_venta);
  }
  return 0;
}
