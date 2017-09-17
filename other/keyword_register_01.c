/* keyword, register, in C.
 *
 * Registers are faster than memory to access, so the variables which are most frequently
 * used in a C program can be put in registers using register keyword. The keyword register
 * hints to compiler that a given variable can be put in a register. It’s compiler’s choice
 * to put it in a register or not. Generally, compilers themselves do optimizations and put 
 * the variables in register.
 *
 */


int main()
{
	/* If you use & operator with a register variable then compiler may give an error or 
	 * warning (depending upon the compiler you are using), because when we say a variable
	 * is a register, it may be stored in a register instead of memory and accessing address
	 * of a register is invalid.
	 */
//	register int i = 10;
//	int *a = &i;

	/* Register keyword can be used with pointer variables. */
	int i = 10;
	register int *a = &i;

	/* Register is a storage class, and C doesn’t allow multiple storage class specifiers 
	 * for a variable. So, register can not be used with static.
	 */ 
//	int i = 10;
//	register static int *a = &i;

	return 0;
}
