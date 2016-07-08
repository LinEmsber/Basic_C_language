/* pointers to function practice */
/* bubble sorting in sorted order and reverse order */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

// Create a fake type for a function pointer.
typedef int (*compare_cb) (int , int );


// Swap
void swap ( int* a, int* b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// A classic bubble sort function which uses the compare callback function.
int *bubble_sort ( int * original_numbers, int count, compare_cb cmp)
{
	int i = 0;
	int j = 0;
	int * sorted_numbers = (int *) malloc( count * sizeof(int) );

	if(sorted_numbers == NULL)
		perror("Memroy error\n");

	memcpy( sorted_numbers, original_numbers, count * sizeof(int) );

	for (i=0; i<count; i++){
		for (j=0; j<count -1; j++){
			if ( cmp( sorted_numbers[j], sorted_numbers[j+1]) > 0 ){
				swap( &sorted_numbers[j], &sorted_numbers[j+1]);
			}
		}
	}

	return sorted_numbers;
}

// sorted order, samll to large number
int sorted_order (int a, int b)
{
	return a-b;
}

// reverse order, large to samll number
int reverse_order (int a, int b)
{
	return b-a;
}

// Used to test that we are sorting things correctly by do the sort and print it out.
void test_sorting (int *numbers, int count, compare_cb cmp )
{
	int i = 0;
	int *sorted = bubble_sort (numbers, count, cmp);

	if ( sorted == NULL)
		perror("Failed to sort as requested.\n");

	// print the result
	for (i=0; i < count; ++i){
		printf("%d  ", sorted[i]);
	}
	printf("\n");
	free(sorted);

	unsigned char *data = (unsigned char *)cmp;
	for(i = 0; i < 25; i++) {
	    printf("%02x:", data[i]);
	}
	printf("\n");
}

int main (int argc, char* argv [])
{

	if ( argc < 2)
		perror("USAGE: filename number1 number2 .....");

	int count = argc - 1;
	int i = 0;

	// A char pointer point to all argument except the filename.
	char ** inputs = argv + 1;

	int * original_numbers = (int*) malloc(count * sizeof(int) );
	if ( original_numbers == NULL)
		perror("Memory error");

	for (i=0; i<count; i++){
		original_numbers[i] = atoi( inputs[i] );
	}

	test_sorting( original_numbers, count, sorted_order );
	test_sorting( original_numbers, count, reverse_order );

	free(original_numbers);

	return 0;
}
