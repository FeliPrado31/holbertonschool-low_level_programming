#include "holberton.h"

/**
 * _isdigit - check if is a number or letter
 * @c: take an int
 * Return: 0 if is other or 1 if is a number
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
