#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the number of params
 * @...: variable of params 
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list params;
	unsigned int i, sum = 0;

	va_start(params, n);

	for (i = 0; i < n; i++)
		sum += va_arg(params, int);

	va_end(params);
	return (sum);
}
