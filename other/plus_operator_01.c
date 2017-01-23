/* precedence of ++ */

#include<stdio.h>

int a = 10;

int fun_1()
{
	return printf("a++ = %d\n", a++);
}

int fun_2()
{
	return printf("++a = %d\n", ++a);
}

int main(){

	printf("original a = %d\n", a);
	fun_1();
	fun_2();
	printf("final a = %d\n", a);

}
