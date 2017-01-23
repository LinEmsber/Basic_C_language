/* Show the size of pointer and related usage. */

#include <stdio.h>


struct node{
	void *data;
	struct node *next;
};

int main(){

	printf("========normal data type==========\n");
	printf("size of int: %zu\n", sizeof(int) );
	printf("size of char: %zu\n", sizeof(char) );
	printf("size of struct node: %zu\n", sizeof(struct node) );

	printf("========pointer data type==========\n");
	printf("size of int*: %zu\n", sizeof(int*) );
	printf("size of char*: %zu\n", sizeof(char*) );
	printf("size of float*: %zu\n", sizeof(float*) );
	printf("size of struct node*: %zu\n", sizeof(struct node*) );
	printf("size of size_t*: %zu\n", sizeof(size_t*) );

	return 0;
}
