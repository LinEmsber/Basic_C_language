/* An exmaple of zero pointer */

#include <stdio.h>


struct s
{
	char c_1;	// type size: 1
	char c_2;	// type size: 1
	int i_1;	// type size: 4
	int i_2;	// type size: 4
};



int main()
{
	// This will print 0
	printf("%d\n", &( (struct s*) 0 ) -> c_1 );
	// This will print 4
	printf("%d\n", &( (struct s*) 0 ) -> i_1 );

	// This will print 8
	printf("%d\n", &( (struct s*) 0 ) -> c_2 );
	// This will print 12
	printf("%d\n", &( (struct s*) 0 ) -> i_2 );


	return 0;
}
