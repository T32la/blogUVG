// pares
#include <stdio.h>

// Funcion
void main() {
  int i;
  i = 0;

  while (i <= 100) {
    printf(" %d \n", i);

    i = i + 2;
  }

  // for 
  for (i = 0; i <= 100; i = i + 20){
    printf(" %d ", i);
  }

  for (i = 0; i<= 100; 1) {
    if ( i % 2 == 0) {
      printf(" %d \n", i )
    }
  }
}