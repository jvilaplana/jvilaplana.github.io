/* Incorrect version */
#include <stdio.h>

int main() {
	int n1, n2;
	int *p1, *p2;

	int x, *p;
	x = 10;
	*p = x;

	/*
		p has NO assigned address, so its contents
	  will be some random memory address
	*/
}
