#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: take operator in string
 * Return: pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	/* compare the operator and return the function  */
	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
			break;
		i++;
	}
	return (ops[i].f);
}
