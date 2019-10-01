#include "holberton.h"

/**
 * _puts - Write a function that prints a string.
 * @str: take an pointer
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
