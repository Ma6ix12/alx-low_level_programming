#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c;

	i = 0;

	while (i < 16)
	{
		if (i < 10)
		{
			c = '0' + i;
		}
		else
		{
			c = 'a' + (i - 10);
		}

		putchar(c);
		i++;
	}

	putchar('\n');

	return (0);
}

