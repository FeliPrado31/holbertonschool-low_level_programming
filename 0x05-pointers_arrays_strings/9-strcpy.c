#include "holberton.h"

/**
 * _strcpy - Write a function that copies the string pointed to by src
 * @dest: pointer
 * @src: pointer
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		*(dest + i) = src[i];
	}
	if (src[i] == '\0')
	{
		*(dest + i) = src[i];
	}
	return (dest);
}
