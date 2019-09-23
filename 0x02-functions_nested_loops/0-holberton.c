#include "holberton.h"
/*
 * main - Entry point
 * @void: no argument
 * Return: Always 0 (success)
 */
int main(void)
{
	char holberton[] = "Holberton";
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(holberton[c]);
	}
	_putchar('\n');
	return (0);
}
