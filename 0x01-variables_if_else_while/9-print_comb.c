#include <stdio.h>

int main(void)
{
	int i;
	int j;

	i = 0;

	while (i < 10)
	{
		j = i + 1;

		while (j < 10)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}

			j++;
		}

		i++;
	}

	putchar('\n');
	
	return (0);
}

