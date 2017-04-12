/* enum practice */

#include <stdio.h>

/* week */
enum week{
	sunday, monday, tuesday, wednesday, thursday, friday, saturday
};

/* no = 0, yes = 1 */
enum boolean {
	NO, YES
};

/* Month */
enum month {
	Jan = 1, Feb, Mar,
	Apr, May, Jun,
	Jul, Aug, Sep,
	Oct, Nov, Dec
};

int main()
{

	enum week today;
	enum boolean boolean_entry;
	enum month month_entry;

	today = wednesday;

	printf("sizeof(enum week): %zu\n", sizeof(enum week));
	printf("today: %d\n", today);
	printf("today + 1: %d\n", today + 1);
	printf("today + 2: %d\n", today + 2);

	printf("boolean_entry: %d\n", boolean_entry);
	printf("boolean_entry + 1: %d\n", boolean_entry + 1);

	printf("month_entry: %d\n", month_entry);
	printf("month_entry + 5: %d\n", month_entry + 5);

	return 0;
}
