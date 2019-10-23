#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum the a + b
 * @a: take int
 * @b: take b
 * Return: the sum a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of a - b
 * @a: take int
 * @b: take int
 * Return: the difference of a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mult of a * b
 * @a: take int
 * @b: take int
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div a with b
 * @a: take int
 * @b: take int
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - remainder of the div
 * @a: take int
 * @b: take int
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
