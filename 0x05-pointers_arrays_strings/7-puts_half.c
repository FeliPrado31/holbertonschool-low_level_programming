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
 * puts_half - Write a function that prints half of a string
 * @str: take an pointer
 */
void puts_half(char *str)
{
	int i, size;

	size = array_length(str);
	size = size + 1;

	for (i = size / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
