#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - first entry
 * @argc: take arg
 * @argv: number of arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, calc;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	calc = f(a, b);
	printf("%d\n", calc);
	return (0);
}
