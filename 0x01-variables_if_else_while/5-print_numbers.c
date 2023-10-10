#include <stdio.h>

/*  a program that prints all single digit numbers of base 10 starting from 0, followed by a new line */
int main (void) 
{
	int n;
	n = 0;
	while (n<10)
	{
		printf("%d", n); /*prints the current number*/
		n++; /* will add n by one*/
	}
	printf("\n"); /* prints a new line */
	return (0);
}
