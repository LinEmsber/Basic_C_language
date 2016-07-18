int title_to_num(char* s)
{
	int sum = 0;
	char *t;
	t=s;

	while(*t){

		sum = sum*26 + ()*t)-('A') + 1;
		++t;
	}

	return sum;
}
