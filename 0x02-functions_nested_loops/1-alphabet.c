#include <stdio.h>

/**
 * prints the alphabet in lowercase
 * initializes with c with an increment by one
 **/
void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
