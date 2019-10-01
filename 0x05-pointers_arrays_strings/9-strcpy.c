#include "holberton.h"

/**
 * array_length - check the long of the string
 * @s: take an pointer
 * Return: size of the string
 */
int array_length(char *s)
{
	int size;

	for (size = 0; s[size]; size++)
		;
	return (size);
}
/**
 * _strcpy - Write a function that copies the string pointed to by src
 * @dest: pointer
 * @src: pointer
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int i, size;

	size = array_length(src);
	for (i = 0; i < size; i++)
		dest[i] = src[i];
	return (dest);
}
