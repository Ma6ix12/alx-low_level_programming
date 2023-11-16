#include <stdio.h>

/* Prototype for the custom _islower function */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z') /* check if c is within lowercase letters */
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
