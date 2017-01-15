/* Using rand() to generate a random integer number arr */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* generate a random number arr in a specific range
 *
 * @len: the length of arr
 * @start: the start number of arr
 * @end: the end number of arr
 */
int * rn_arr_gen( int len , int start, int end)
{
        int i;
        int * ret_arr = NULL;
        int range = start - end;

        // memroy allocation
        ret_arr = (int *) malloc( len * sizeof(int) );
        memset(ret_arr, 0, len + 1);

        // rand seed use time
        srand( (unsigned) time(NULL) );

        // generate arr
        for ( i = 0; i < len; i++ ){
                *(ret_arr + i) = (rand() % range) + 1;
        }

        return ret_arr;
}

/* print the arr with specific lenght
 *
 * @arr: the target arr
 * @len: the length of arr
 */
void print_list(int *arr, int len)
{
        int i;

        for ( i = 0; i < len; i++){
                printf("%d ", *(arr + i) );
        }
        printf("\n");
}

int main( int argc, char *argv[] )
{
        int * arr = rn_arr_gen( atoi(argv[1]), 10, 100 );

        print_list( arr, atoi(argv[1]) );

        return 0;
}
