/*
  Faustino Aguilar, 2015
  Problema 17:
  Construya un programa que determine la frecuencia de cada vocal en una cadena dada.
*/
#include "stdio.h"

int main() {
  char cadena[20], freq=0, j=0, i, x, vocales[]="aeiouAEIOU";
  int l = sizeof (vocales) / sizeof (vocales[0]);
  printf("Escriba una palabra: ");
  scanf("%s", cadena);
  x=0;
  for (i = 0; i < (l-1)/2; i++) {
    do {
      if (cadena[j] == vocales[i] || cadena[j] == vocales[i+5]) {
        freq++;
      }
      j++;
    } while (cadena[j] != '\0');
    if (freq > 0) {
      printf("Vocal %c, frecuencia: %d\n", vocales[i], freq);
      x=1;
    }
    freq=0, j=0;
  }
  if (!x) {
    printf("No hay vocales en esta palabra\n");
  }
  return 0;
}
