#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: number
 * Return: number
 */
void *malloc_checked(unsigned int b)
{
	void *number;

	number = malloc(b);
	if (number == NULL)
		exit(98);
	return (number);
}
