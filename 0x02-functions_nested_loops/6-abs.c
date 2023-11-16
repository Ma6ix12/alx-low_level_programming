#include <stdio.h>

/* Prototype for the custom _abs function */
int _abs(int n)
{
	if (n >= 0) /* check if n is not negative */
	{
		return n; /* return n */
	}
	else 
	{
		return -n; /* return the oppsite of n */
	}
}
