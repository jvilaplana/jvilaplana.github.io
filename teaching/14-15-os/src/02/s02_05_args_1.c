#include <stdio.h>

void exchange(int *, int *);

int main() {
  int a=1, b=2;
  printf("a = %d and b = %d\n", a, b);
  exchange(&a, &b);
  printf("a = %d and b = %d\n", a, b);
}

void exchange(int *x, int *y) {
  int aux;
  aux = *x;
  *x = *y;
  *y = aux;
  printf("Function: a = %d and b = %d\n", *x, *y);
}
