/*
  Faustino Aguilar, 2015
  Problema 16:
  Elabore un programa que coloque elementos en un vector
  de manera que los elementos siempre estén ordenados.
  A medida que entra un valor debe ser colocado en la
  posición correspondiente para mantener el orden de los elementos.
*/

#include "stdio.h"

int main() {
  /*
    Variables
    l: longuitud del vector
    c: elementos en el vector
    i, j, k: contadores
    valor: introducido por el usuario
  */
  int i, j, k, valor, l, c=0;
  // Vector que almacenará enteros
  int vector[5];
  // Calcula la longitud del vector
  // Referencia:
  // http://stackoverflow.com/questions/37538/c
  l = sizeof(vector)/sizeof(vector[0]);
  for (i = 0; i < l; i++) {
    printf("\nEscribe el valor %d° del vector: ", i+1);
    scanf("%d", &valor);
    if (c == 0) {
      vector[0] = valor;
      c++;
    } else {
      /*
        Vector NO está lleno
        Si valor es el mayor, solo se agrega al final.
        6 → 1 2 4 5 → 1 2 4 5 6
        Si valor es menor, se corren los números hacia delante
        y se cambia el valor por el número que es mayor a él.
        4 → 2 4 5 6 → 2 4 4 5 6
      */
      for (j = 0; j < c; j++) {
        if (valor <= vector[j]) {
          // Solo entra si el valor es menor o igual
          for (k = c; k > j; k--) {
            vector[k] = vector[k-1];
          }
          vector[j] = valor;
          break;
        } else if (j == c-1) {
          // Se agrega el valor al final
          vector[j+1] = valor;
        }
      }
      /*
        Incrementa el contador de la
        cantidad de elementos del vector
        solo si es menor al tamaño del vector
      */
      c >= l ? c=l : c++;
    }
    // Imprime el vector
    printf("Vector = [ ");
    for (j = 0; j < c; j++){
      printf("%d ", vector[j]);
    }
    printf("]\n");
  }
  return 0;
}
