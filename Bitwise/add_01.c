/* Using bitwise operator to do a multiply function */

#include <stdio.h>

int add(int a, int b)
{
	if (b){
		return add(a^b, (a&b)<<1 );

	}else{
		return a;
	}

}

// if a and b are 2^n, then a + b = a ^ b, and a & b = 0.
//
// if add(4, 8)
// 4 = 0100
// 8 = 1000
// 4 ^ 8 = 12
// 4 & 8 = 0000
// (4 & 8) << 1 = 0000
//
// if add(5, 9)
// 5 = 0101
// 9 = 1001
// 5 ^ 9 = 1100 = 12
// (5 & 9) << 1 = 0001 << 1 = 0010 = 2
//
// 1100 ^ 0010 = 1110 = 12 + 2 = 14


int main()
{

	printf("add(4, 8): %d\n", add(4, 8) );
	printf("add(-10, -100): %d\n", add(-10, -100) );

}
