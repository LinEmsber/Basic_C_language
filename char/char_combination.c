/* String concatenation using and asprintf().
 *
 * Using valgrind:
 * > valgrind --leak-check=ues -v ./a.out
 */

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	char *str_a = "hello";
	char *str_b = "world";

	char *str_c = NULL;

	// char *strcat(char *dest, const char *src);
	//
	// The strcat() function appends the src string to the dest string, overwriting
	// the terminating null byte ('\0') at the end of dest, and then adds a
	// terminating null byte.

	asprintf(&str_c, "%s%s", str_a, str_b);

	printf("str_a: %s\n", str_a);
	printf("str_b: %s\n", str_b);
	printf("str_c (c = a + b): %s\n", str_c);

	free(str_c);

	return 0;
}
