/*
  Faustino Aguilar, 2015
  Problema 10:
  Un vector contiene las letras del alfabeto. Elabore un programa que codifique una expresión dada, transformando cada letra de la expresión en la letra que le sigue. Si un carácter de entrada es z, le corresponderá la letra a.
  Ejemplo : la palabra ana será codificada como bob y la palabra zar queda codificada como abs.
*/

#include "stdio.h"

int main() {
  int i, j;
  char abc[28] = "abcdefghijklmnopqrstuvwxyz";
  char ABC[28] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char palabra[100], codificada[100];
  printf("Escribe una palabra (No utilize ñ, ni tildes, solo letras a-z): ");
  scanf("%s", palabra);
  for (i = 0; i < 100; i++) {
    if (palabra[i] == '\0') {
      break;
    }
    for (j = 0; j < 28; j++) {
      if (palabra[i] == abc[j]) {
        codificada[i] = abc[j+1];
      } else if (palabra[i] == ABC[j]) {
        codificada[i] = ABC[j+1];
      }
    }
  }
  printf("Palabra codificada: %s\n", codificada);
  return 0;
}
