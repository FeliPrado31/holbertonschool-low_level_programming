#include <stdio.h>
/**
 * main - entry block
 * @void: No argument
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
		putchar('\n');
		return (0);
	}
}
