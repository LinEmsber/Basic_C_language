#include <stdio.h>
#include <stdlib.h>

/* The compare function determine the order of the soring. */
int cmp_fun (const void * a, const void * b)
{
        return ( *(int*)a - *(int*)b );
}

int main()
{
        int i;
        int int_array[10] = { 88, 56, 100, 2, 25, 100, 80, 99, 37, 10 };

        printf("Before sorting the list is:\n");
        for( i = 0 ; i < 10; i++ )
                printf("%d ", int_array[i]);
	printf("\n");

        /* void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*)) */
        qsort(int_array, 10, sizeof(int), cmp_fun);

        printf("After sorting the list is:\n");
        for( i = 0 ; i < 10; i++ )
                printf("%d ", int_array[i]);
	printf("\n");

        return 0;
}

