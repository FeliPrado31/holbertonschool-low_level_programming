/*
 * The  strcat() function appends the src string to the dest string,
 over‐writing the terminating null byte ('\0') at the end of dest,
 and then adds  a  terminating  null  byte.
 *The  strlen() function calculates the length of the string s,
 excluding
 the terminating null byte ('\0').
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
 * _strcat - function that concatenates two strings.
 * @dest: pointer with the first value
 * @src: pointer with the second value
 * Return: the string with the concatenation
 */
char *_strcat(char *dest, char *src)
{
	int i, size;

	size = array_length(dest);
	for (i = 0; src[i] != '\0'; i++)
		dest[i + size] = src[i];
	return (dest);
}
