#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * initializes with c with an increment by one
 * Return: Nothing
 */
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
