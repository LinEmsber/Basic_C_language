/* Example of Variadic Macros.
 * A macro can be declared to accept a variable number of arguments much as a function can.
 *
 * References:
 * https://msdn.microsoft.com/en-us/library/ms177415.aspx
 */

#include <stdio.h>

#define CHECK1(x, ...) if (!(x)) { printf(__VA_ARGS__); }
#define CHECK2(x, ...) if ((x)) { printf(__VA_ARGS__); }
#define CHECK3(...) { printf(__VA_ARGS__); }

int main()
{
	CHECK1(0, "here %s %s %s", "are", "some", "varargs1(1)\n");
	CHECK1(1, "here %s %s %s", "are", "some", "varargs1(2)\n");   // won't print

	CHECK2(0, "here %s %s %s", "are", "some", "varargs2(3)\n");   // won't print
	CHECK2(1, "here %s %s %s", "are", "some", "varargs2(4)\n");

	CHECK3("here %s %s %s", "are", "some", "varargs3(5)\n");

	return 0;
}
