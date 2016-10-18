/* magic suqre */

#include <stdio.h>
#define MAX_SIZE 15


// int inital_suqare(int n)
// {
// 	int i, j;
// 	int *square = (int *) malloc ( sizeof(int) * n * n);
//
// 	for (i = 0; i < n; i++)
// 		for (j = 0; j < n; j++)
// 			*(suqare + (i* n) + j) = 0;
// }
//
//
// int *magic_square(int n)
// {
//
// }


int main()
{
	int i, j;
	int row, col;
	int count;
	int size = 5;
	int square[MAX_SIZE][MAX_SIZE];


	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
			// *(square + (i * size) + j) = 0;
			square[i][j] = 0;

	// middle of first row
	square[0][ (size - 1) / 2 ] = 1;

	i = 0;
	j = (size - 1) / 2;

	for ( count = 2; count <= size * size; count++){
		// up
		row = (i - 1 < 0) ? (size - 1) : (i - 1);

		// left
		col = (j - 1 < 0) ? (size - 1) : (j - 1);

		// down
		if (square[row][col]){
			i = (++i) % size;

		}else{
			j = row;
			j = (j - 1 < 0) ? (size - 1) : --j;
		}

		square[i][j] = count;
	}


	// print out
	for (i = 0; i < size; i++){
		for (j = 0; j < size; j++){
			printf("%5d", square[i][j]);
		}
		printf("\n");
	}


}
