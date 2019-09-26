#include "holberton.h"

/**
 * _isdigit - check if the letter is uppercase or lowcase
 * @c: take an int
 * Return: 1 if is lowcase
 */
int _isdigit(int c)
{
	if (c >= '0' || c <= '9')
		return (1);
	else
		return (0);
}
