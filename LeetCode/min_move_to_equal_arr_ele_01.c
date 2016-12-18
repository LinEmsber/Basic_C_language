/* minimum move to equal array elements */

#include <stdio.h>


int minMoves(int* num_arr, int numsSize)
{
        if (numsSize <= 1)
                return 0;

        int i;
        int min_num = num_arr[0];
        long sum = num_arr[0];

        for(i = 1; i < numsSize; i++){

                if ( min_num > num_arr[i] ){
                        min_num = num_arr[i];
                }

                sum += num_arr[i];
        }
        return sum - min_num * numsSize;
}

int main()
{
        int int_arr[3] = {1, 1, 2147483647};
        printf("minMoves( [1,1,2147483647] ): %d\n", minMoves(int_arr, 3) );
}
