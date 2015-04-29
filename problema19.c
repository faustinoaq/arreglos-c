/*
  Faustino Aguilar, 2015
  Problema 19:
  Elabore un programa que codifique y decodifique una expresión dada utilizando la clave MURCIELAGO.
*/

#include "stdio.h"
#include "stdlib.h"

int main() {
  char clave[11]="murcielago";
  char palabra[20];
  int i=0, j;
  printf("Escribe una palabra: ");
  scanf("%s", palabra);
  do {
    for (j = 0; j < 10; j++) {
      if (palabra[i] == clave[j]) {
        printf("%c\n", palabra[i]);
        char d = (char)(((int)'0')+j);
        palabra[i] = d;
        break;
      }
    }
    i++;
  } while(palabra[i] != '\0');
  printf("Palabra codificada: %s\n", palabra);
  i=0;
  do {
    for (j = 0; j < 10; j++) {
      if (palabra[i] == (char)(((int)'0')+j)) {
        printf("%c\n", palabra[i]);
        palabra[i] = clave[j];
        break;
      }
    }
    i++;
  } while(palabra[i] != '\0');
  printf("Palabra decodificada: %s\n", palabra);
  return 0;
}
