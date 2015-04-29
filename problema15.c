/*
  Faustino Aguilar, 2015
  Problema 15:
  Modifique el programa anterior para determinar el número y salario del empleado de mayor antigüedad en la empresa.
*/

#include "time.h"
#include "stdio.h"
#include "stdlib.h"

int main() {
  int i, m=40, _empleados[40], _tiempo[40];
  float _salario[40];
  printf("\nempleados = [ ");
  for (i = 0; i < m; i++) {
    _empleados[i] = i+1;
    printf("%d ", _empleados[i]);
  }
  printf("]\n");
  printf("\ntiempos = [ ");
  srand(time(NULL));
  for (i = 0; i < m; i++) {
    _tiempo[i] = random() % 100;
    printf("%d ", _tiempo[i]);
  }
  printf("]\n");
  printf("\nsalarios = [ ");
  srand(time(NULL));
  for (i = 0; i < m; i++) {
    _salario[i] = random() / 1000000;
    printf("%.2f ", _salario[i]);
  }
  printf("]\n");
  int _mayor=0, mayor = _tiempo[0];
  // int a = 0, b=2, c=0;
  // a ? printf("%d\n", b) : printf("%d\n", c);
  for (i = 0; i < m; i++) {
    if (mayor < _tiempo[i]){
      mayor = _tiempo[i];
      _mayor = i;
    }
  }
  printf("\nEmpleado más antiguo:\n");
  printf("-----------------------------------------\n");
  printf("| Empleado # | Tiempo Meses | Salario $ |\n");
  printf("|          %d |           %d |   %.2f |\n", _empleados[_mayor], _tiempo[_mayor], _salario[_mayor]);
  printf("-----------------------------------------\n");
  return 0;
}
