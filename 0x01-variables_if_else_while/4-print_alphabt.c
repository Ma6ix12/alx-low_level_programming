#include <stdio.h>

int main(void) 
{
	int c;

	c = 'a';
	while (c <= 'z')
	{
	if (c != 'q' && c != 'e')
	{
		putchar(c);
	}
	c++;
	}
	putchar('\n');
	return (0);
}

