/* a better way to allocate memory using malloc() */

#include <stdio.h>
#include <stdlib.h>

typedef struct st{
        int a;
        float b;
        char c;
        float d;
}st_t;

st_t * mem_alloc()
{
        // st_t * tmp = malloc( sizeof(*tmp) );
        st_t * tmp;
        tmp = malloc( sizeof(*tmp) );

        if ( !tmp ){
                return NULL;
        }

        printf("sizeof(*tmp): %zu\n", sizeof(*tmp) );

        return tmp;
}

int main()
{
        mem_alloc();

        return 0;
}
