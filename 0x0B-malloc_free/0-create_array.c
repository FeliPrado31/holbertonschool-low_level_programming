#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes.
 * @size: size
 * @c: char
 * Return: ponter to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(c));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(arr + i) = c;
	return (arr);
}
