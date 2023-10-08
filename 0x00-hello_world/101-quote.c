#include <unistd.h>

int main(void)
{
	char message[] = "and that piece of art is useful
		\" - Dora Korpar, 2015-10-19\n";
	/* Use the write function to print to standard error (file descriptor 2)*/
	write(2, message, sizeof(message) - 1);
	/* Return 1 to indicate program completion with an error status*/
	return (1);
}

