#include "main.h"

/* Prototype for the custom print_sign function */
int print_sign(int n)
{
	if (n > 0) /* check if n is greater than zero */
	{
		_putchar('+');
		return 1;
	}
	else if (n == 0) /* check if n is equal to zero */
	{
		_putchar('0');
		return 0;
	}
	else /* otherwise, n is less than zero */ 
	{
		_purchar('-');
		return -1;
	}
}

