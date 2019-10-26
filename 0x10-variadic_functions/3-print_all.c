#include "variadic_functions.h"

/**
 * op_char - printf char
 * @separator: colon
 * @op: argument pointer
 */
void op_char(va_list op)
{
	printf("%c", va_arg(op, int));
}

/**
 * op_int - printf char
 * @separator: colon
 * @op: argument pointer
 */
void op_int(va_list op)
{
	printf("%d", va_arg(op, int));
}

/**
 * op_float - printf char
 * @separator: colon
 * @op: argument pointer
 */
void op_float(va_list op)
{
	printf("%f", va_arg(op, double));
}

/**
 * op_string - printf char
 * @separator: colon
 * @op: argument pointer
 */
void op_string(va_list op)
{
	char *str = va_arg(op, char*);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - Write a function that prints anything.
 * @format: the format of the string
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list va;
	char *colon = "";

	op_t ops[] = {
		{"c", op_char},
		{"i", op_int},
		{"f", op_float},
		{"s", op_string},
		{NULL, NULL}
	};

	va_start(va, format);

	while (format && format[i])
	{
		j = 0;
		while (ops[j].op)
		{
			if (format[i] == ops[j].op[0])
			{
				printf("%s", colon);
				ops[j].f(va);
				colon = ", ";

			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(va);
}
