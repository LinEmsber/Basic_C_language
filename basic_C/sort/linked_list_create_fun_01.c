/* create a item */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct int_item{
	int val;
};

void create_int_item( struct int_item ** int_item_name, int int_val)
{

	* int_item_name = malloc( sizeof( struct int_item ) );
	memset( *int_item_name, 0, sizeof(struct int_item) );
	(*int_item_name)->val = int_val;
	printf("%p\n", *int_item_name);
	printf("%d\n", (*int_item_name)->val);

}

int main()
{

	struct int_item *ptr_int;
	create_int_item( &ptr_int,10 );

	printf("%d\n", ptr_int->val);

	return 0;
}
