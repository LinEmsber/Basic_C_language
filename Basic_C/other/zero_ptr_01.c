/* An exmaple of zero pointer */

#include <stdio.h>


struct s
{
	char char_1;	// type size: 1
	char char_2;	// type size: 1
	int int_1;	// type size: 4
	int int_2;	// type size: 4
};



int main()
{
	// This will print 0
	printf("%d\n", &( (struct s*) 0 ) -> char_1 );
	// This will print 1
	printf("%d\n", &( (struct s*) 0 ) -> char_2 );

	// This will print 4
	printf("%d\n", &( (struct s*) 0 ) -> int_1 );
	// This will print 8
	printf("%d\n", &( (struct s*) 0 ) -> int_2 );


	return 0;
}
