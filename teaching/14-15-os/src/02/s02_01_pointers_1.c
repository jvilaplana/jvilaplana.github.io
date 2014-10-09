#include <stdio.h>
#include <stdlib.h>

int main() {
	int num = 5;
	int *p;
	p = &num;

	printf("Num: %d, &p: %p, *p: %d\n", num, p, *p);
	exit(0);
}
