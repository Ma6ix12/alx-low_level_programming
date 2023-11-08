#include "main.h"

/**
 *  Prints the alphabet in lowercase
 *  Returns void
 *
 */

void print_alphabet(void);

int main()
	{
		print_alphabet();
		return 0;
	}

	void print_alphabet(void)
	{
		char letter;

		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);

			letter++;
		}

		_putchar('\n');
}
