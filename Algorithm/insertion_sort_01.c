/* The implementation of insertion sort */

#include <stdio.h>

int main()
{

	int i, j, num, temp, arr[20];

	printf("Enter total elements: ");
	scanf("%d", &num);

	printf("Enter %d elements: ", num);
	for (i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}


	// insertion sort
	for ( i=1; i< num; i++){
		temp = arr[i];
		j = i-1;

		while ( (j>=0) && (temp < arr[j]) ){
			arr[j+1] = arr[j];
			j = j - 1;
		}

		arr[j+1] = temp;
	}

	// print out the results
	printf("After Sorting: ");
	for (i = 0; i < num; i++)
		printf("%d\t", arr[i]);

	printf("\n");

}
