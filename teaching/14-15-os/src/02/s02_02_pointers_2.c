#include <stdio.h>

int main() {
	int n1, n2;
	int *p1, *p2;

	// Variable initialization
	n1 = 3;
	n2 = 10;
	p1 = p2 = NULL;

	p1 = &n1;		// p1 points to n1
	p2 = &n2;		// p2 points to n2

	if(p1 != p2) {
		printf("p1 and p2 point to different memory positions\n");
    printf("Content of p1 is: %d\n", *p1);
    printf("Content of p2 is: %d\n", *p2);
	}

	p2 = p1;

	if(p1 == p2) {
    printf("p1 and p2 point to the same memory position\n");
    printf("Content of p1 and p2 is: %d\n", *p1);
  }
}
