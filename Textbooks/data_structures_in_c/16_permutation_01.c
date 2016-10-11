/* recursive permutation generator */

// generate all the permutations of list[start] to list[end]

#include <stdio.h>

#define SWAP(a, b)	( (a) ^= (b), (b) ^= (a), (a) ^= (b) )


void perm_int( int *list, int start, int end)
{
	int i;

	if (start == end){
		for (i = 0; i <= end; i++)
			printf("%d", list[i]);
		printf("  ");

	}else{
		for (i = start; i <= end; i++){
			SWAP( list[start], list[i] );
			perm_int( list, start + 1, end );
			SWAP( list[start], list[i] );
		}
	}
}

void perm_char( char *list, int start, int end)
{
	int i;

	if (start == end){
		// for (i = 0; i <= end; i++)
			printf("%s\n", list);
		// printf("  ");

	}else{
		for (i = start; i <= end; i++){
			SWAP( *(list + start), *(list + i) );
			perm_char( list, start + 1, end );
			SWAP( *(list + start), *(list + i) );
		}
	}
}


int main()
{
	int int_arr[] = { 2, 3, 4, 5, 1 };
	char char_arr[] = "abc";


	perm_int(int_arr, 0, 4);
	// perm_char(char_arr, 0, 2);

	return 0;
}
