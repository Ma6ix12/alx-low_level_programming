#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	/* Print lowercase alphabet*/
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A'; /* Reset letter to 'A' for uppercase*/

	/* Print uppercase alphabet*/
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n'); /* Print a new line*/

	return (0);
}

