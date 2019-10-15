#include <stdlib.h>

/**
 * _strlen - Write a function that returns the length of a string.
 * @s: take an pointer
 * Return: the index of the array
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	i++;
	return (i);
}
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size
 * @c: char
 */
char *_strdup(char *str)
{
	unsigned int len, j;
	char *s;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	s = malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (j = 0; j < len; j++)
		s[j] = str[j];
	return (s);
}
