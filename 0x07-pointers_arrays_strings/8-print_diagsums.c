#include <stdio.h>

/**
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
