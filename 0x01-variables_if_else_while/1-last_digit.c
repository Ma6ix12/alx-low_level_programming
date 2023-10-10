#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;
    int d;
    int lastDigit = 0;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    d = n % 10; /* this line will get the last digit of n */
    lastDigit = d;
    printf("Last digit of %d is %d", n, d);
    if (lastDigit > 5)
    {
        printf(" and is greater than 5\n");
    }
    else if (lastDigit == 0)
    {
        printf(" and is 0\n");
    }
    else
    {
        printf(" and is less than 6 and not 0\n");
    }
    return (0);
}

