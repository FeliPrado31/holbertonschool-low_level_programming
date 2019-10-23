#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - first entry
 * @argc: take arg
 * @argv: number of arg
 * Return: 0
 */
int main(int argc, char **argv)
{
	int calc;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	calc = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", calc);
	return (0);
}
