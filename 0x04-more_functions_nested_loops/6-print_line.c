#include "holberton.h"

/**
 * print_line - Write a function that draws a straight line in the terminal.
 * @n: take an int
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
