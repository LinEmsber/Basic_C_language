/* An example of integer overflow */

#include <stdio.h>

int main()
{
	int a = 2147483647;
	int b = 2147483647;

	long c = a + b;

	printf("%d + %d = %ld \n", a, b, c);

	return 0;
}
