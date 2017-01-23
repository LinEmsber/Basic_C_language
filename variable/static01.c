/* practice static variable */
#include<stdio.h>

void fun()
{
	int a = 10;
	static int sa = 10;

	a = a + 5;
	sa = sa + 5;

	printf("a = %d, sa = %d\n", a, sa );
}

int main()
{
	int i;
	for ( i=0; i<10; ++i){
		fun();
	}

}
