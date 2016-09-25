/* swap */

#include <stdio.h>

// XOR swap function
void swap(int *x, int *y)
{
	if ( x != y ){
		*x ^= *y;
		*y ^= *x;
		*x ^= *y;
	}
}


int main()
{
	int a = 5;
	int b = 10;

	printf("a: %d, b: %d\n", a, b);
	swap(&a, &b);
	printf("a: %d, b: %d\n", a, b);
}
