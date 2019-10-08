#include <stdio.h>

/**
 * print_diagsums - Write a function that prints the sum of the
 * two diagonals of a square matrix of integer.
 * @a: pointer
 * @size: pointer
 */
void print_diagsums(int *a, int size)
{
	int i, a1 = 0, b2 = 0;

	for (i = 0; i < (size * size); i += (size + 1))
		a1 += a[i];
	for (i = (size - 1); i < (size * size) - (size - 1); i += (size - 1))
		b2 += a[i];
	printf("%d, %d\n", a1, b2);
}
