/*
 * The  strcat() function appends the src string to the dest string,
   over-writing the terminating null byte ('\0') at the end of dest,
   and  the adds  a  terminating  null  byte.
   The strings may not overlap,
   and the dest string must have enough space for the  result.
   If  dest  is  not large  enough, program behavior is unpredictable;
   buffer overruns are a favorite avenue for attacking secure programs.
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
 * *_strncat - Write a function that concatenates two strings.
 * @dest: first string
 * @src: second string
 * @n: lenght
 * Return: the string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, size;

	size = array_length(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i + size] = src[i];
	return (dest);
}
