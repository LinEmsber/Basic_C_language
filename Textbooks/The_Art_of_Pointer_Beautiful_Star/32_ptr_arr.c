

#include <stdio.h>


int main()
{
	int i;
	int size;

	int arr[] = {100, 110, 120};

	int *ptr = arr;

	size = sizeof(arr) / sizeof(arr[0]);


	// %x = unsigned hexadecimal


	// =====Using arr=====
	printf("Using arr\n");

	// &arr[i]
	for (i = 0; i < size; i++){
		printf("&arr[%d] = %x\n", i, &arr[i]);
	}
	printf("\n");

	// arr+i
	for (i = 0; i < size; i++){
		printf("arr+%d = %x\n", i, arr+i);
	}
	printf("\n");

	// arr[i]
	for (i = 0; i < size; i++){
		printf("arr[%d] = %x\n", i, arr[i]);
	}
	printf("\n");

	// *(arr+i)
	for (i = 0; i < size; i++){
		printf("*(arr+%d) = %x\n", i, *(arr+i));
	}
	printf("\n");

	// &arr
	for (i = 0; i < size; i++){
		printf("&arr[%d] = %x\n", i, &arr[i]);
	}
	printf("\n");


	// =====Using ptr=====
	printf("Using ptr\n");

	// ptr+i
	for (i = 0; i < size; i++){
		printf("ptr+%d = %x\n", i, ptr+i);
	}
	printf("\n");

	// ptr[i]
	for (i = 0; i < size; i++){
		printf("ptr[%d] = %x\n", i, ptr[i]);
	}
	printf("\n");

	// *(ptr+i)
	for (i = 0; i < size; i++){
		printf("*(ptr+%d) = %x\n", i, *(ptr+i) );
	}
	printf("\n");

}
