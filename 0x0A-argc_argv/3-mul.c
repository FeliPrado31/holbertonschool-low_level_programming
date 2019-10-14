#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: takes in arguments
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
