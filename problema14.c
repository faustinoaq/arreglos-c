/*
  Faustino Aguilar, 2015
  Problema 14:
  Un vector contiene los números de empleados de una empresa, otro el tiempo de laborar en la empresa y otro el salario correspondiente. Los datos de un mismo empleado están en el mismo índice para cada vector, es decir, si el número de un empleado esta en el índice 34, entonces el tiempo en la empresa y su salario también están en la posición 34 de los otros vectores. Elabore un programa que lea n números de empleados y que determine el tiempo que lleva laborando y el salario de cada uno. Calcule el porcentaje que representa el salario de todos los empleados encontrados.
*/

#include "time.h"
#include "stdio.h"
#include "stdlib.h"

int main() {
  int i, n=5, m=40, _empleados[40], _tiempo[40];
  float _salario[40], total_salarios=0, salarios_empleados=0;
  printf("\nempleados = [ ");
  for (i = 0; i < m; i++) {
    _empleados[i] = i+1;
    printf("%d ", _empleados[i]);
  }
  printf("]\n");
  printf("\ntiempos = [ ");
  srand(time(NULL));
  for (i = 0; i < m; i++) {
    _tiempo[i] = random() % 10;
    printf("%d ", _tiempo[i]);
  }
  printf("]\n");
  printf("\nsalarios = [ ");
  srand(time(NULL));
  for (i = 0; i < m; i++) {
    _salario[i] = random() / 1000000;
    total_salarios = total_salarios + _salario[i];
    printf("%.2f ", _salario[i]);
  }
  printf("]\n");
  int empleado;
  for (i = 0; i < n; i++) {
    printf("\nEscriba un No. de empleado: ");
    scanf("%d", &empleado);
    if (empleado < 1 || empleado > 40) {
      printf("Este empleado no existe\n");
      i--;
    } else {
      printf("----------------------------------------\n");
      printf("| Empleado # | Tiempo Años | Salario $ |\n");
      printf("|          %d |           %d |   %.2f |\n", empleado, _tiempo[empleado-1], _salario[empleado-1]);
      salarios_empleados = salarios_empleados + _salario[empleado-1];
      printf("----------------------------------------\n");
    }
  }
  printf("\nEl salario de los empleados anteriores representa el %.2f %% del total de salarios.\n", (salarios_empleados*100)/total_salarios);
  return 0;
}
