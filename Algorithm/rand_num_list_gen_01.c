/* Using rand() to generate a random integer number list */

#include <stdio.h>
#include <stdlib.h>
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
        ret_arr = (int *) malloc( len * sizeof(int) );

        // rand seed use time
        srand( (unsigned) time(NULL) );

        // generate list
        for ( i = 0; i < len; i++ ){
                *(ret_arr + i) = (rand() % range) + 1;
        }

        return ret_arr;
}

/* print the list with specific lenght
 *
 * @list: the target list
 * @len: the length of list
 */
void print_list(int *list, int len)
{
        int i;
        
        for ( i = 0; i < len; i++){
                printf("%d ", *(list + i) );
        }
        printf("\n");
}

int main( int argc, char *argv[] )
{
        int * arr = rn_list_gen( atoi(argv[1]), 10, 100 );

        print_list( arr, atoi(argv[1]) );

        return 0;
}
