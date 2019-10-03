/*
 * The  strcpy()  function  copies the string pointed to by src,
 including the terminating null byte ('\0'),
 to the buffer  pointed  to  by  dest.
 The  strings  may  not overlap,
 and the destination string dest must be large enough to receive the copy.
 Beware  of  buffer  overruns!
 */

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
 * *_strncpy - Write a function that copies a string
 * @dest: take an pointer
 * @src: take an pointer
 * @n: size of the function
 * Return: the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j = 0;

	while (src[j] != '\0')
		j++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; n > j; j++)
		dest[j] = '\0';
	return (dest);
}
