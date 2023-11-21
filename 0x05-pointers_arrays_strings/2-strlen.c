#include "main.h"

/**
 * strlen - returns the lengths of a string
 * @s: string
 * Return: lenght
 */
int_strlen(char*s)
{
	int longi = 0;

	while(*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
