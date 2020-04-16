#include "search_algos.h"

/**
  * linear_search - do a linear search
  * @array: array
  * @size: size
  * @value: value
  * Return: vaue
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
