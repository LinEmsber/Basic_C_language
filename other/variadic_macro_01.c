/* Example of Variadic Macros.
 * A macro can be declared to accept a variable number of arguments much as a function can.
 *
 * References:
 * https://gcc.gnu.org/onlinedocs/cpp/Variadic-Macros.html
 */


#include <stdio.h>
#include <stdlib.h>

#define err_printf(...) fprintf (stderr, __VA_ARGS__)

int main()
{
	char *input_file = "example.txt";
	int line_num = 5;

	err_printf ("input file: %s\nline number: %d\n", input_file, line_num);

	return 0;
}
