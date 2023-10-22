#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random number and prints
 *  if the number is positive, negative, or zero.
 * returns 0 on successful execution.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}

