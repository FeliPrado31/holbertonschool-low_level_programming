#include "holberton.h"

/**
 * _isupper - check if is upper or a number
 * @c: take an int
 * Return: 1 if is a upper or 0 if is a number
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
