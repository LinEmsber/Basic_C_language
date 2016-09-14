/**
 * Return an array of size *return_size.
 * Note: The returned array must be malloced, assume caller calls free().
 */

// #define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MIN(x, y) y ^ ( ( x ^ y ) & -( x < y ) )

int* intersection(int* arr_1, int arr_size_1, int* arr_2, int arr_size_2, int* return_size)
{
	int size = MIN(arr_size_1, arr_size_2);
	int *arr = (int*)malloc(sizeof(int)*(size));
	int top = -1;

	//check each element in arr_1;
	for(int i = 0; i < arr_size_1; i++){

		int j = 0;

		//check whether the nums[i] in array arr_2;
		for(; j < arr_size_2; j++){
			if(arr_1[i] == arr_2[j])
			break;
		}

		if(j < arr_size_2){
			j = 0;

			//avoid duplicate;
			for(; j <= top; j++){
				if(arr[j] == arr_1[i]) break;
			}

			if(j > top){
				arr[++top] = arr_1[i];
			}
		}
	}
	*return_size = top+1;

	return arr;
}
