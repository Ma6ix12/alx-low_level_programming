#include <stdio.h>

int main(void)
/**
 * The main function of the program calculates and prints the sizes of different data types
 * (char, int, long, long long, float, double, and long double)
 * on the computer it is compiled and run on.
 * 
 * @return 0 Indicates a successful program execution.
 */
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
 	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of float: %lu byte(s)\n", sizeof(float));

	#if defined(__LP64__)
		printf("This is a 64-bit machine.\n");
	#else
		printf("This is a 32-bit machine.\n");
	#endif
    
    return (0);
}

