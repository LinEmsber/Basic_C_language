/* bitwise max and min macro in c */

// int x;  // we want to find the minimum of x and y
// int y;
// int r;  // the result goes here
//
// r = y ^ ( ( x ^ y ) & -( x < y ) ); // min(x, y)
//
// On some rare machines where branching is very expensive and no condition move instructions exist,
// the above expression might be faster than the obvious approach,
//
// r = (x < y) ? x : y, even though it involves two more instructions.
// (Typically, the obvious approach is best, though.)
//
// It works because if x < y is 0, then -(x < y) will be all ones,
// 	so r = y ^ (x ^ y) & ~0 = y ^ x ^ y = x.
//
// Otherwise, if x >= y is 1, then -(x < y) will be all zeros,
// 	so r = y ^ ((x ^ y) & 0) = y.
//
// On some machines, evaluating (x < y) as 0 or 1 requires a branch instruction, so there may be no advantage.
// To find the maximum, use:
//
// r = x ^ ((x ^ y) & -(x < y)); // max(x, y)

#include <stdio.h>

#define min(x, y) y ^ ( ( x ^ y ) & -( x < y ) )
#define max(x, y) x ^ ( ( x ^ y ) & -( x < y ) )


int main()
{
	printf("min(5, 9): %d\n", min(5,9) );
	printf("max(5, 9): %d\n", max(5,9) );
}
