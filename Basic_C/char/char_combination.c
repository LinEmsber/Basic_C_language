/* string concatenation using and asprintf() */
/* Using vargrind --leak-check=ues -v ./a.out to check */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	char *str_a = "hello";
	char *str_b = "world";

	char *new_str2 = NULL;

	// char *strcat(char *dest, const char *src);
	//
	// The strcat() function appends the src string to the dest string, overwriting
	// the terminating null byte ('\0') at the end of dest, and then adds a
	// terminating null byte.

	asprintf(&new_str2, "%s%s", str_a, str_b);

	printf("new_str2 a+b=c: %s\n", new_str2);

	free(new_str2);

	return 0;
}
