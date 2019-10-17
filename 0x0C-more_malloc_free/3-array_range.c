#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: min
 * @max: max
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *p, i, size = max - min;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (size + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= size; min++, i++)
		p[i] = min;
	return (p);
}
