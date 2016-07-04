/* enum practice */

#include <stdio.h>

enum week{ sunday, monday, tuesday, wednesday, thursday, friday, saturday};

int main()
{

	enum week today;
	today=wednesday;
	/*
	today = asdf;
	the error situation, only accept variables have already in the week function
	*/
	printf("%d day\n",today+1);

	return 0;
}
