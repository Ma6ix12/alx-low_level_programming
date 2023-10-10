#include <stdio.h>

/* prints all numbers of base 10 starting from 0 */
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
