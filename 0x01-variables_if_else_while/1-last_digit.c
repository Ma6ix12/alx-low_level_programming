#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  main - Entry point
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	d = n % 10; /* this line will get the last digit of n */

	printf("Last digit of %d is %d", n, d);
	if (d > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (d == 0)
	{
		printf(" and is 0\n");
	}
	else if (d < 6 && d != 0)
	{
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
