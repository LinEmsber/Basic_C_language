/* Given two arrays, write a function to compute their intersection. */

#include <stdio.h>
#include <stdlib.h>

// #define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MIN(x, y) y ^ ( ( x ^ y ) & -( x < y ) )


/* intersection, find the intersection of two integer array
 * @arr_1: the first array
 * @arr_1_len: the length of array_1
 * @arr_2: the first array
 * @arr_2_len: the length of array_2
 * @
 */
int *intersection(int* arr_1, int arr_1_len, int* arr_2, int arr_2_len, int return_size)
{
	int i, j;
	int len = MIN(arr_1_len, arr_2_len);

	int *ret_arr = (int *)malloc( sizeof(int) * len );
	int ret_arr_index = 0;

	// check each element in arr_1;
	for( i = 0; i < arr_1_len; i++){

		// arr_2 start from the first element
		j = 0;

		// check whether the arr_1[i] in array arr_2;
		for(; j < arr_2_len; j++){
			if(arr_1[i] == arr_2[j])
			break;
		}

		if ( j < arr_2_len ){
			ret_arr[ret_arr_index] = arr_2[j];
			ret_arr_index++;
		}

		// if(j < arr_2_len){
		// 	j = 0;
		//
		// 	// avoid duplicate;
		// 	for(; j <= ret_arr_index; j++){
		// 		if(ret_arr[j] == arr_1[i]) {
		// 			break;
		// 		}
		// 	}
		//
		// 	if(j > ret_arr_index){
		// 		ret_arr_index++;
		// 		ret_arr[ret_arr_index] = arr_1[i];
		// 	}
		// }
	}
	// return_size = ret_arr_index+1;

	return ret_arr;
}

/*
 *
 *
 */
void print_array(int *arr, int arr_len)
{
	int i;
	for (i = 0; i < arr_len; i++){
		if ( i == 0){
			printf("arr: ");
		}

		printf("%d ", *(arr + i ) );

		if (i == (arr_len - 1) ){
			printf("\n");
		}
	}
}

int main()
{
	int i;
	int a_1[] = {2, 30, 100, 3, 5, 500, 6, 4};
	int a_2[] = {2, 3, 7 ,30, 4, 3, 500, 5, 100, 3, 6, 4};

	int a_1_len = sizeof(a_1) / sizeof( int );
	int a_2_len = sizeof(a_2) / sizeof( int );

	int min_len = MIN(a_1_len, a_2_len);

	print_array(a_1, a_1_len);

	// printf("int a_1[8] = {2, 3, 3, 3, 3, 1, 6, 4}\n");
	// printf("int a_2[12] = {2, 3, 7 ,3, 4, 3, 5, 5, 1, 3, 6, 4}\n");
	//
	// for (i = 0; i < 10 ; i++){
	//
	// 	printf("intersection(a_1, a_2): %d\n", *(intersection(a_1, 8, a_2, 12, 10)+i) );
	// }
	//
	// // free();
}
