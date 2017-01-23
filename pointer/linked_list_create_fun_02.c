/* create a item */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct int_item{
    int val;
};

struct int_item *create_int_item(int int_val)
{
	struct int_item *ret_item= malloc( sizeof( struct int_item ) );
	memset( ret_item, 0, sizeof(struct int_item) );
	(ret_item)->val = int_val;

	return ret_item;
}


int main()
{

	struct int_item *ptr_int;
	ptr_int = create_int_item( 10 );

	printf("%d\n", ptr_int->val);

	return 0;
}
