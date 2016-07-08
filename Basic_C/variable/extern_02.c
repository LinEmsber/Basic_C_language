#include<stdio.h>

#include "somefile.h"

extern int var;
int main(){
	var = 10;
	return 0;
}

/*
	Supposing that somefile.h has the definition of var. This program will be compiled 
	successfully.
*/
