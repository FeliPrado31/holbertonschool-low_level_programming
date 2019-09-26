#include "holberton.h"

/**
 * print_line - Write a function that draws a straight line in the terminal.
 * @n: take an int
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 2; j < i + 1; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
