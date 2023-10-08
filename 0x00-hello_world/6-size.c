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
    printf("Size of long: %lu byte(s)\n", sizeof(long));
    printf("Size of long long: %lu byte(s)\n", sizeof(long long));
    printf("Size of float: %lu byte(s)\n", sizeof(float));
    printf("Size of double: %lu byte(s)\n", sizeof(double));
    printf("Size of long double: %lu byte(s)\n", sizeof(long double));
    
    return (0);
}

