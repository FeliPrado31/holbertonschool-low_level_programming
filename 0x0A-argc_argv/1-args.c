#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: idk
 * @argv: idk
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc);
	argc--;
	return (0);
}
