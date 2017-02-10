/* A simple example of pointer to pointer */

#include <stdio.h>
#include <stdlib.h>


struct node {
        int ** data;
};

int main()
{
        // declaration
        struct node * n;
        int a = 100;


        // allocate struct node
        n = malloc( sizeof(*n) );
        if ( !n )
                return 1;

        // asign a address into pointer to pointer
        n->data = (int**) &a;


        printf("n: %p\n", n);
        printf("n->data: %d\n", n->data);
        printf("*(n->data): %d\n", *(n->data) );

        return 0;
}
