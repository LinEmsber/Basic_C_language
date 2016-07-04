/* An example of pointer to pointer */

#include <stdio.h>

int main()
{

	int i;
	int count = 5;
	char *names[] = { "Alan", "Frank","Mary", "John", "Lisa" };
	char **cur_name = names;

	// second way using pointers
	for(i = 0; i < count; i++) {
		printf("name: %s\n", *(cur_name+i) );
	}
}
