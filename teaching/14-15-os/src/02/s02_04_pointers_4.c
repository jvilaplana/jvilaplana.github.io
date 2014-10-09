/* Correct version */
#include <stdio.h>

int main() {
  int x, y, *p;

  p = NULL;
  x = 10;
  y = 20;

  if(p == NULL) p = &x;
  *p = y;

	/*
		Now p has an assigned address, and
		its contents can be used.
		Here x == y
	*/
}
