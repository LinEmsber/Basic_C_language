#include<stdio.h>

extern int var;
int main(){
	var = 10;
	return 0;
}

/*
	If a variable is only declared and an initializer is also provided with that declaration, 
	then the memory for that variable will be allocated i.e. that variable will be considered 
	as defined. Therefore, as per the C standard, this program will compile successfully and 
	work.
*/

/*

	1. Declaration can be done any number of times but definition only once.
	2. “extern” keyword is used to extend the visibility of variables/functions().
	3. Since functions are visible through out the program by default. The use of extern is not 
		needed in function declaration/definition. Its use is redundant.
	4. When extern is used with a variable, it’s only declared not defined.
	5. As an exception, when an extern variable is declared with initialization, it is taken as 
		definition of the variable as well.	
*/
