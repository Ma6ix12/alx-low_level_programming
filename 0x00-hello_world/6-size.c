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
  printf("Size of char: %lu bytes\n", sizeof(char));
  printf("Size of short: %lu bytes\n", sizeof(short));
  printf("Size of int: %lu bytes\n", sizeof(int));
  printf("Size of long: %lu bytes\n", sizeof(long));
  printf("Size of long long: %lu bytes\n", sizeof(long long));
  printf("Size of float: %lu bytes\n", sizeof(float));
  printf("Size of double: %lu bytes\n", sizeof(double));
  printf("Size of long double: %lu bytes\n", sizeof(long double));
    
    return (0);
}

