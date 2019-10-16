#include <stdlib.h>

/**
 * _strlen - Write a function that returns the length of a string.
 * @s: take an pointer
 * Return: the index of the array
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * argstostr - function
 * @ac: count
 * @av: pointer
 * Return: strign
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, args = 0;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		args += _strlen(av[i]) + 1;
	s = malloc(sizeof(char) * args + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			s[k] = av[i][j];
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
