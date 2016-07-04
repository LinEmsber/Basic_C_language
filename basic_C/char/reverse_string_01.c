/* An example of reverse string function */

#include <stdio.h>
#include <string.h>

// swap
void swap( char *s1, char *s2)
{
	char *tmp;
	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}


void reverse_string(char *s)
{
	if (s){

		char *start = s;
		// find the last char position.
		char *end = s + strlen(s) - 1;

		// printf("address of str: %p\n", str);
		// printf("address of end: %p\n", end);

		// reverse
		while( start < end ){
			swap( start, end );
			start++;
			end--;
		}
	}
}


#define XORSWAP(a, b)   ((&(a) == &(b)) ? (a) : ((a)^=(b),(b)^=(a),(a)^=(b)))

void strrev(char *str)
{
	char *end = str;

	// find the last char position.
	while(end && *end)
		++end;

	// check the last char is null byte
	printf("strcmp(end, '\\0'): %d\n", strcmp(end, "\0"));

	// this loop exclude the null byte
	for(--end; str < end; ++str, --end){
		*str = *str ^ *end;
		*end = *str ^ *end;
		*str = *str ^ *end;
	}
}

int main()
{

	// "string_cant_be_modify" in the read-only parts of the memory.
	char *string_cant_be_modify = "this_is_a_string_that_cannot_be_modify";


	char string[] = "abcdef";

	printf("original str: %s\n", string);
	strrev(string);
	printf("final str: %s\n", string);

	return 0;
}
