/* Using rand() to generate a random integer number list */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>

/* generate a random number list in a specific range
 *
 * @len: the length of list
 * @start: the start number of list
 * @end: the end number of list
 */
int * rn_list_gen( int len , int start, int end)
{
        int i;
        int * ret_arr = NULL;
        int range = start - end;

        // memroy allocation
        ret_arr = (int *) malloc( (len + 1) * sizeof(int) );
        memset(ret_arr, 0, len + 1);

        // rand seed use time
        srand( (unsigned) time(NULL) );

        // generate list
        for ( i = 0; i < len; i++ ){
                *(ret_arr + i) = (rand() % range) + 1;
        }
        *(ret_arr + i) = INT_MAX;

        return ret_arr;
}


void print_list_INT_MAX(int * list, int len)
{
        int * ptr = list;

        while( *ptr != INT_MAX ){
                printf("%d ",  *(ptr++) );
        }

        printf("\n");
}

int main( int argc, char *argv[] )
{
        int * arr = rn_list_gen( atoi(argv[1]), 10, 100 );

        print_list_INT_MAX( arr, atoi(argv[1]) );

        return 0;
}
