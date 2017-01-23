

// the * operator takes precedence over the ++ operator

int *p;
int a = 100;
p = &a;

ptr++;    // Pointer moves to the next int position (as if it was an array)
++ptr;    // Pointer moves to the next int position (as if it was an array)

++*ptr;   // Increments the value by 1 then use it
++(*ptr); // Increments the value by 1 then use it
++*(ptr); // Increments the value by 1 then use it

(*ptr)++; // Increments the value by 1 after use it

*ptr++;   // use the value of p then moves to next position
*(ptr)++; // use the value of p then moves to next position

*(ptr)++; // use the value of p then increment the value


*++ptr;   // moves to the next int location then use that value, with your code, segfault
*(++ptr); // moves to the next int location then use that value, with your code, segfault
