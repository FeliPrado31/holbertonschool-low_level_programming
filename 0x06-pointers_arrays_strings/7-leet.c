#include "holberton.h"

/**
 *
 */
char *leet(char *c)
{
	int i, j;

	char *c1 = "aeotlAEOTL";
	char *c2 = "4307143071";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; c1[j] != '\0'; j++)
		{
			if (c[i] == c1[j])
				c[i] = c2[j];
		}
	}
	return (c);
}
