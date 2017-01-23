#include<stdio.h>

/* p.17, copy input to output */
main()
{
	int c;
	while ( ( c=getchar() ) != EOF)
		putchar(c);
}
