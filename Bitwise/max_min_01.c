/* bitwise max and min macro in c */

// #define min(x, y) (x < y) ? x : y
//
// On some rare machines where branching is very expensive and no condition move instructions exist,
// the below expression might be faster than the obvious approach,
//
// #define min(x, y) y ^ ( ( x ^ y ) & -( x < y ) )
//
// It works because, if x < y is 0, then -(x < y) will be all ones,
// 	so result = y ^ ( (x ^ y) & ~0 ) = y ^ x ^ y = x.
//
// Otherwise, if x >= y is 1, then -(x < y) will be all zeros,
// 	so result = y ^ ( (x ^ y) & 0 ) = y.
//

#include <stdio.h>

#define MIN(x, y) y ^ ( ( x ^ y ) & -( x < y ) )
#define MAX(x, y) x ^ ( ( x ^ y ) & -( x < y ) )


int main()
{
	printf("min(5, 9): %d\n", MIN(5,9) );
	printf("max(5, 9): %d\n", MAX(5,9) );
}
