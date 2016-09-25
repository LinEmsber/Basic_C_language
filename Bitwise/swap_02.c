/* swap, MACRO method */

#include <stdio.h>

// Doesn't work when a and b are the same object - assigns zero (0) to the object in that case
#define XORSWAP_UNSAFE(a, b)	( (a) ^= (b), (b) ^= (a), (a) ^= (b) )

// checks that the addresses of a and b are different before XOR-ing
#define XORSWAP(a, b)   ( (&(a) == &(b) ) ? (a) : ( (a) ^= (b), (b) ^= (a), (a) ^= (b) )

int main()
{
	int a = 5;
	int b = 10;

	printf("a: %d, b: %d\n", a, b);
	XORSWAP(&a, &b);
	printf("a: %d, b: %d\n", a, b);
	XORSWAP(&a, &b);
	printf("a: %d, b: %d\n", a, b);
}
