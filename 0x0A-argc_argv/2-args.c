#include <stdio.h>
/**
 * main - Program that prints the number of arguments passed into it.
 * @argc: Number of arguments.
 * @argv: Array with arguments in memory.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
