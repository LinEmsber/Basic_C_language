/* test about increment */

#include <stdio.h>

int main()
{
	int i;
	int arr[] = {6, 7, 8, 9, 10};
	int *ptr = arr;

	// increment once
	*(ptr++) += 123;

	// increment twice
	*(ptr++) = *(ptr++) + 123;

	// print out two different results in GCC and Clang.
	printf("*ptr: %d, *(++ptr): %d\n" , *ptr, *(++ptr) );

	for ( i = 0; i < 5; i++ ) {
		printf("arr[%d]: %d  ", i, arr[i]);
	}
	printf("\n");

}
