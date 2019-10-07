#include "holberton.h"
/**
 * _memcpy - Write a function that copies memory area.
 * @dest: pointer
 * @src: pointer
 * @n: lenght
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
		*d++ = *s++;
	return (dest);
}
