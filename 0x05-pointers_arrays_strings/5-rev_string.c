#include "holberton.h"

/**
 *
 *
 *
 */
int array_length(char *s)
{
	int size;

	for (size = 0; s[size]; size++)
		;
	return (size);
}

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
