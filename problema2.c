/*
  Faustino Aguilar, 2015
  Problema 2:
  Confeccione un programa que lea un valor y
  que determine la posición que contiene el valor leído
*/

#include "stdio.h"
#include "time.h"
#include "stdlib.h"

int main() {
  int valor, vector[30], existe=0;
  printf("Escriba un valor entero: ");
  scanf("%d", &valor);
  int i, num=30;
  srand(time(NULL));
  for (i = 0; i < num; i++) {
    vector[i] = random() % 10;  // 0 al 9
    printf("%d ", vector[i]);
  }
  printf("\n");
  for (i = 0; i < num; i++) {
    if (valor == vector[i]) {
      printf("El valor %d se encuentra en la posición %d\n", valor, i);
      existe=1;
    }
  }
  if (existe == 0) {
    printf("El valor no está dentro del vector\n");
  }
  return 0;
}
