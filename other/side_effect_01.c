/* An example of side effect */

// Using two different compilers, gcc and clang, to compile and execute this code.
//
// > gcc -Wall side_effect_01.c && ./a.out
// > clang -Wall side_effect_01.c && ./a.out


#include <stdio.h>

int main()
{
	int i;
	int arr[] = {6, 7, 8, 9, 10};
	int *ptr = arr;

	/* you can chose two different increments on the below.
	 * It will shows different results in different kinds of compilers.
	 */
	 
	*(ptr++) += 123;			// ptr increment once
	*(ptr++) = *(ptr++) + 123;		// ptr increment twice

	// print out two different results in GCC and Clang.
	printf("*ptr: %d, *(++ptr): %d\n" , *ptr, *(++ptr) );

	for ( i = 0; i < 5; i++ ) {
		printf("arr[%d]: %d  ", i, arr[i]);
	}
	printf("\n");

}
