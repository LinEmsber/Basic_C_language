#include<stdio.h>

extern int var;
int main(){
	var = 10;
	return 0;
}

/*
	This program throws error in compilation. Because var is declared but not defined 
	anywhere. Essentially, the var isn’t allocated any memory. And the program is trying 
	to change the value to 10 of a variable that doesn’t exist at all.
*/
