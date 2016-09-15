/* Given two arrays, write a function to compute their intersection. */

#include <stdio.h>
#include <stdlib.h>

// #define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MIN(x, y) y ^ ( ( x ^ y ) & -( x < y ) )

int *intersection(int* arr_1, int arr_size_1, int* arr_2, int arr_size_2, int return_size)
{
	int i;
	int size = MIN(arr_size_1, arr_size_2);
	int *arr = (int*)malloc(sizeof(int)*(size));
	int top = -1;

	// check each element in arr_1;
	for( i = 0; i < arr_size_1; i++){

		int j = 0;

		// check whether the nums[i] in array arr_2;
		for(; j < arr_size_2; j++){
			if(arr_1[i] == arr_2[j])
			break;
		}

		if(j < arr_size_2){
			j = 0;

			// avoid duplicate;
			for(; j <= top; j++){
				if(arr[j] == arr_1[i]) {
					break;
				}
			}

			if(j > top){
				top++;
				arr[top] = arr_1[i];
			}
		}
	}
	return_size = top+1;

	return arr;
}

int main()
{
	int i;
	int a_1[8] = {2, 30, 100, 3, 5, 500, 6, 4};
	int a_2[12] = {2, 3, 7 ,30, 4, 3, 500, 5, 100, 3, 6, 4};

	printf("int a_1[8] = {2, 3, 3, 3, 3, 1, 6, 4}\n");
	printf("int a_2[12] = {2, 3, 7 ,3, 4, 3, 5, 5, 1, 3, 6, 4}\n");

	for (i = 0; i < 10 ; i++){

		printf("intersection(a_1, a_2): %d\n", *(intersection(a_1, 8, a_2, 12, 10)+i) );
	}
}
