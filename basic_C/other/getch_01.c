

#include <stdio.h>

char buf[10];           // buffer for ungetch
int bufp = 0;           // next free posotion in buf

int getch(void)
{
	// return (bufp > 0) ? buf[--bufp] : getchar();
	return getchar();
}

int main()
{
	int c;

	while (isspace(c = getch())){
		// printf("%d\n", c);
	}

}
