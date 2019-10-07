#include "holberton.h"

/**
 * _memset - Write a function that fills memory with a constant byte.
 * @s: pointer
 * @b: char
 * @n: lenght
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;
	return (s);
}
