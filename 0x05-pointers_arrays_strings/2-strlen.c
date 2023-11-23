#include <stdio.h>

/**
 * strlen - returns the lengths of a string
 * @s: string
 * Return: length
 */
size_t_strlen(const char *str)
{
	size_t length = 0;

	while(*str++)
		length++;
	return (length);
}
