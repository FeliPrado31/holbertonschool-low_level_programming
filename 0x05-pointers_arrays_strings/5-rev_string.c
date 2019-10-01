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
 * rev_string - Write a function that reverses a string
 * @s: take a point
 */
void rev_string(char *s)
{
	int i, size;
	char temp;

	size = array_length(s);
	size = size - 1;
	for (i = 0; i < size; size--, i++)
	{
		temp = s[i];
		s[i] = s[size];
		s[size] = temp;
	}
}
