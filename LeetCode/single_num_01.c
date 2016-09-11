/*
 * Given an array of integers, every element appears twice except for one.
 * Find that single one.
 */

#include <stdio.h>

int single_number(int A[], int n)
{
	int i;
	int result = 0;

	for (i = 0; i<n; i++) {
		result ^=A[i];
	}

	return result;
}


int main()
{
	int arr[7] = {3, 6, 5, 6, 3, 7, 5};

	printf("single_number: %d\n", single_number(arr, 7) );
}
