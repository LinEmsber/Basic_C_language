/* An example of _Generic */

// Provides a way to choose one of several expressions at compile time, based on a type of a
// controlling expression.
//
// compare the following two method to compile source code:
//
// > gcc -Wall generic_selection_01.c
// > gcc -Wall -D__LINKED_LIST__ generic_selection_01.c

#include <stdio.h>

#define printf_dec_format(x) _Generic((x), \
	char: "%c",		\
	signed char: "%hhd",	\
	unsigned char: "%hhu",	\
	signed short: "%hd",	\
	unsigned short: "%hu", 	\
	signed int: "%d",	\
	unsigned int: "%u",	\
	double: "%f", 		\
	char *: "%s",		\
	void *: "%p")

#define print(x) printf(printf_dec_format(x), x)
#define printnl(x) printf(printf_dec_format(x), x), printf("\n");

struct node{
	int val;
	struct node * next;
};


int main()
{

#if defined (__LINKED_LIST__)
	struct node * n;
	printnl(n);		// detect a new type
#endif
	printnl('a');		// prints "97"
	printnl((char)'a');	// prints "a"
	printnl(123);		// prints "123"
	printnl(1.234);		// prints "1.234000"

	return 0;
}
