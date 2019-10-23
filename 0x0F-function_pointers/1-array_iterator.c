#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given
 * @array: the array
 * @size: size of arrary
 * @action: pointer to function to need use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL && action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
