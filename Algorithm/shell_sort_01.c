/* K n R C, p62, shell sort */

#include <stdio.h>
#define SIZE 3

void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}


int shellsort(int v[], int n)
{
	int gap, i, j, counter;
	counter = 0;

	for (gap = n/2; gap>0; gap = gap/2){
		for (i = gap; i<n; i++){
			for (j = i-gap; j>=0 && v[j]>v[j+gap]; j = j-gap){
			counter++;
			swap(&v[j], &v[j+gap]);
			}
		}
	}
	printf("counter: %d  ", counter);

	return counter;
}

int main()
{

	int i, counter;
	int int_arr[SIZE] = {10, 9, 8};

	printf("original: ");
	for ( i=0; i<SIZE; i++)
		printf("%d  ", int_arr[i]);
	printf("\n");

	counter = shellsort(int_arr, SIZE);

	printf("shellsort: ");
	for ( i=0; i<SIZE; i++)
		printf("%d  ", int_arr[i]);
	printf("\n");
	printf("counter: %d  ", counter);
}
