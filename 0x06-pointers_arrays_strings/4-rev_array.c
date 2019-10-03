#include "holberton.h"

/**
 * reverse_array - Write a function that reverses the content of an array
 * an array of intagers.
 * @a: pointer
 * @n: elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, j;

	i = n - 1;
	j = 0;
	while (i > j)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
		i--;
		j++;
	}
}
