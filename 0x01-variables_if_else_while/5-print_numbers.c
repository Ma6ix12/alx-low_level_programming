#include <stdio.h>

/**
 * main - Entry point
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		printf("%d", n); /*prints the current number*/
		n++; /* will add n by one*/
	}
	printf("\n"); /* prints a new line */
	return (0);
}
