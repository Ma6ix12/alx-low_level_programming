#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);

	/* Calculate the last digit by taking the absolute value of n and modulo by 10*/
	int lastDigit = abs(n) % 10;

	if (lastDigit > 5)
	{
		printf("and is greater than 5\n");
	} else if (lastDigit == 0)
	{
		printf("and is 0\n");
	} else
	{
        printf("and is less than 6 and not 0\n");
	}

	return   (0);
}

