#include "holberton.h"

/**
  * print_alphabet - print alphabet
  * @void: no argument
  */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}