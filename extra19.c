/*
  Faustino Aguilar, 2015
  Problema 19:
  Elabore un programa que codifique y decodifique una expresión dada utilizando la clave MURCIELAGO.
*/

#include "stdio.h"
#include "locale.h"

int main() {
  setlocale(LC_ALL, "spanish");
  char clave[]="b ";
  /*
    Clave para codificar y decodificar la palabra
  */
  char abc[27]="abcdefghijklmnopqrstuvwxyz";
  // char p[1]="a";
  // printf("%s\n", p);
  char palabra[20], new_palabra[256];
  int id_clave[10];
  int m=sizeof(new_palabra)/sizeof(new_palabra[0]);
  int l=sizeof(abc)/sizeof(abc[0]);
  // printf("l=%d\n", l);
  int i, j, new_id, x, y, h, g, b;
  i=0, b=0;
  do {
    // printf("%c", clave[i]);
    for (j = 0; j < l; j++) {
      if (clave[i] == abc[j]) {
        id_clave[i]=j+1;
        // printf("=%d\n", id_clave[i]);
        b++;
      }
    }
    i++;
  } while(clave[i] != '\0');
  printf("Escriba una palabra (No utilize ñ, ni tildes, solo letras a-z): ");
  scanf("%s", palabra);
  i=0;
  do {
    // printf("%c", palabra[i]);
    for (j = 0; j < l; j++) {
      if (palabra[i] == abc[j]) {
        // printf("=%d\n", j+1);
        if (i >= b) {
          // printf("b=%d\n", b);
          new_id=(j+1)*id_clave[b-1];
        } else {
          new_id=(j+1)*id_clave[i];
        }
        // printf("new_id_%c=%d\n", palabra[i], new_id);
        if (new_id > l) {
          x=new_id/(l);
          y=new_id-x*(l);
          // printf("x=%d, y=%d\n", x, y);
          for (h = 0; h < x; h++) {
            // printf("letra=%c\n", abc[l-1]);
            for (g = 0; g < m; g++) {
              if (new_palabra[g] == '\0') {
                new_palabra[g]=abc[l-1];
                if (y == 0 && h == x-1) {
                  new_palabra[g+1]='_';
                  new_palabra[g+2]='\0';
                } else {
                  new_palabra[g+1]='\0';
                }
                // printf("\nTEST1: %s\n", new_palabra);
                break;
              }
            }
          }
          if (y > 0) {
            /*
              Solo si es mayor a cero
            */
            // printf("letra=%c\n", abc[y-1]);
            // printf("_\n");
            for (g = 0; g < m; g++) {
              if (new_palabra[g] == '\0') {
                new_palabra[g]=abc[y-1];
                if (palabra[i+1] != '\0') {
                  new_palabra[g+1]='_';
                  new_palabra[g+2]='\0';
                } else {
                  new_palabra[g+1]='\0';
                }
                // printf("\nTEST2: %s\n", new_palabra);
                break;
              }
            }
          }
        } else {
          // printf("letra=%c\n", abc[new_id-1]);
          // palabra[i+1] == '\0' ? printf("\n") : printf("_\n");
          for (g = 0; g < m; g++) {
            if (new_palabra[g] == '\0') {
              new_palabra[g]=abc[new_id-1];
              if (palabra[i+1] != '\0') {
                new_palabra[g+1]='_';
                new_palabra[g+2]='\0';
              } else {
                new_palabra[g+1]='\0';
              }
              // printf("\nTEST3: %s\n", new_palabra);
              break;
            }
          }
        }
      }
    }
    i++;
  } while(palabra[i] != '\0');
  // printf("\n\n");
  printf("CODIFICADA: %s\n", new_palabra);
  int acum=0, valor=0, _cont=0, x_cont=0;
  i=0;
  do {
    if (new_palabra[i] == '_') {
      x_cont++;
    }
    i++;
  } while(new_palabra[i] != '\0');
  // printf("xc=%d, b=%d\n", x_cont, b);
  i=0;
  do {
    for (j = 0; j < l; j++) {
      if (new_palabra[i] == abc[j]) {
        // printf("Valor: %d, np=%c, i=%d, abc=%c\n", valor, new_palabra[i], i,abc[j]);
        valor = j+1;
        acum = acum + valor;
        // printf("acum=%d\n", acum);
        break;
      }
    }
    if (new_palabra[i] == '_' || new_palabra[i+1] == '\0') {
      // printf("cont=%d, id_c=%d\n", _cont, id_clave[_cont]);
      if (x_cont+1 > b) {
        new_id = acum/id_clave[b-1];
        palabra[_cont] = abc[new_id-1];
        // printf("new_id: %d, p:%c\n", new_id, palabra[_cont]);
      } else {
        new_id = acum/id_clave[_cont];
        palabra[_cont] = abc[new_id-1];
        // printf("2new_id: %d, p:%c\n\n", new_id, palabra[_cont]);
      }
      _cont++;
      acum=0;
    }
    i++;
  } while (new_palabra[i] != '\0');
  // printf("\n\n");
  printf("DECODIFICADA: %s\n", palabra);
  return 0;
}
