#include <stdio.h>

int main(void) {
	/* Initialize variable to store current character */
	char letter = 'a';

	/* Loop through all lowercase letters */
	while (letter <= 'z')
	{
		/* Print current letter */
		putchar(letter);

		/* Increment letter to the next one */
		letter++;
	}

	/* Print a new line */
	putchar('\n');

	return (0);
}

