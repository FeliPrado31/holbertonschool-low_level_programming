#include "holberton.h"

/**
 * _print_rev_recursion - write a function that returns the length a string
 * @s: pointer of string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
