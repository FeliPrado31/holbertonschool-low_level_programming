#include "holberton.h"

/**
 * _islower - return 1 if lowercase
 * @c: takes in a character
 * Return: 0 for uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
