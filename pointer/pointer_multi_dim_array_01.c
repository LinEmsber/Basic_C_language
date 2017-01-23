/* pointer vs multi-dimensional array */

#include <stdio.h>

int main(){

	int i;
	int a[10][20];
	int *b[10];

	a[3][4] = 5;
	b[13] = 1555;

	printf("a[3][4] = 5, a: %d\n", a[3][4]);
	printf("address of *b: %p\n", *b);
	printf("b[3][4] = 10, b: %d\n", *(b+13));

	for ( i=0; i<15; i++){
		printf("b[%d]: %d\n", i, b[i]);
	}

	return 0;
}
