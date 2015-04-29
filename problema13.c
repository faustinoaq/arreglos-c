/*
  Faustino Aguilar, 2015
  Problema 13:
  Considere un vector en memoria  con 100 elementos. Construya un programa que lea dos valores enteros que usará como índices para eliminar del vector los elementos comprendidos entre los índices leídos. Coloque un valor negativo como señal de elemento eliminado. Defina las excepciones.
*/

#include "stdio.h"
#include "stdlib.h"

int main() {
  int i, n=100, vector[100], inicio=0, final=0;
  printf("Vector = [ ");
  for (i = 0; i < n; i++) {
    if (i % 10 == 0) {
      printf("\n");
    }
    vector[i] = random() % 10;  // 0 al 9
    printf("%d ", vector[i]);
  }
  printf("]\n");
  do {
    printf("Escriba el primer indice: ");
    scanf("%d", &inicio);
    if (inicio < 0 || inicio > 99) {
      printf("Índice nó valido, (escriba un valor entre 0 y 99)\n");
    } else {
      break;
    }
  } while (1);
  do {
    printf("Escriba el segundo indice: ");
    scanf("%d", &final);
    if (final < 0 || final > 99) {
      printf("Índice nó valido, (escriba un valor entre 0 y 99)\n");
    } else if (inicio == final){
      printf("Los índices deben ser diferentes\n");
    } else {
      break;
    }
  } while (1);
  if (inicio > final) {
    i = inicio;
    inicio = final;
    final = i;
  }
  for (i = inicio+1; i < final; i++) {
    vector[i] = -1;
  }
  printf("Vector = [ ");
  for (i = 0; i < n; i++) {
    if (i % 10 == 0) {
      printf("\n");
    }
    if (vector[i] >= 0) {
      printf(" %d ", vector[i]);
    } else {
      printf("%d ", vector[i]);
    }
  }
  printf("]\n");
  return 0;
}
