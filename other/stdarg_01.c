/* An example of va_start(), va_arg(), and va_end().
 *
 * A function may be called with a varying number of arguments of varying types.
 * void va_start(va_list ap, last);
 * type va_arg(va_list ap, type);
 * void va_end(va_list ap);
 */

#include <stdio.h>
#include <stdarg.h>

void print_floats (int float_num, ...)
{
	int i;
	double value;
	va_list vl;

	/* The va_start() macro initializes ap for subsequent use by va_arg() and va_end(), and must be called first. */
	va_start(vl, float_num);

	printf("Printing floats: ");

	for (i = 0; i < float_num; i++){

		/* The va_arg() macro expands to an expression that has the type and value of the next argument in the call. */
		value = va_arg(vl, double);
		printf(" [%.2f]", value);

	}

	printf("\float_num");

	/* Each invocation of va_start() must be matched by a corresponding invocation of va_end() in the same function. */
	va_end(vl);
}

int main ()
{
	print_floats(3, 3.14159, 2.71828, 1.41421);

	return 0;
}
