/* An example of pointer to function. */

#include <stdio.h>
#include <string.h>

int max ( int a , int b )
{
	return (a>b)? a:b ;
}

int min ( int a , int b )
{
	return (a<b)? a:b ;
}


int main () {

	// When we define the new type, we also need to determine the argument counts and
	// types of function which is pointed by pointer.
	//
	// The rule as follow:
	//
	// typedef (the type of pointed function) (*new type name) (the arguments of function)
	typedef int (*ptr_fun) (int, int);

	// (the name of new type) (pointer variable) = (the function be pointed)
	ptr_fun find_max = max;
	ptr_fun find_min = min;

	printf("find_max(10, 20): %d\n", find_max( 10, 20) );
	printf("find_min(10, 20): %d\n", find_min( 10, 20) );


    return 0;
}
