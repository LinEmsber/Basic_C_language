/* matrix multiplication function */

#include <stdio.h>

#define MAX_SIZE 5

void print_matrix(int *matrix, int rows, int cols)
{
	int i, j;
	for (i = 0; i < rows; i++){
		for (j = 0; j < cols; j++){

			printf("%d\t", *(matrix + (i * cols) + j) );

		}
		printf("\n");
	}
}


void product(int *a, int *b, int *c, int rows_a, int cols_b, int cols_a)
{
	int i, j, k;

	for (i = 0; i < rows_a; i++){
		for(j = 0; j < cols_b; j++){

			// c[i][j] = 0;
			*(c + (i * cols_b) + j) = 0;

			for( k = 0; k < cols_a; k++){

				// *c[i][j] = a[i][k] * b[k][j];
				*(c + (i * cols_b) + j) += *(a + (i * cols_a) + k) * *(b + (i * cols_a) + j);
			}
		}
	}
}


int main()
{
	int arr_1[2][5] = {
		{1, 3, 5, 7 ,9},
		{2, 4, 6, 8, 10}
	};

	int arr_2[5][2] = {
		{10, 20},
		{30, 40},
		{50, 60},
		{70, 80},
		{90, 100}
	};

	int arr_3[2][5];

	printf("arr_1\n");
	print_matrix(&arr_1[0][0], 2, 5);

	printf("arr_2\n");
	print_matrix(&arr_2[0][0], 5, 2);

	product(&arr_1[0][0], &arr_2[0][0], &arr_3[0][0], 2, 5, 2);

	printf("mult(arr_1, arr_2)\n");
	print_matrix(&arr_3[0][0], 2, 5);
}
