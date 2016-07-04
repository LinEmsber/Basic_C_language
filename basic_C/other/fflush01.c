#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fPtr;
	char c;

	fPtr = fopen("fflush_practice.txt", "w+");
	if (!fPtr){
		printf("file creating is fail.\n");
		exit(1);
	}
	
	while ( (c=getchar() ) != EOF ){
		fputc(c, fPtr);
		fflush(fPtr);
	}

	fclose(fPtr);

	return 0;
}
