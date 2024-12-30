#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 1;
  int count = 0;

  while (i > 0) {
    printf("Hello World \n");
    count++;

    if (count == 10) break;
  }

  return 0;
}