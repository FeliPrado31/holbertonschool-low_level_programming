#include "holberton.h"

/**
 * _strcpy - Write a function that copies the string pointed to by src
 * @dest: pointer
 * @src: pointer
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int i, size;

	for (size = 0; src[size]; size++)
		;

	for (i = 0; i < size; i++)
		dest[i] = src[i];
	return (dest);
}
