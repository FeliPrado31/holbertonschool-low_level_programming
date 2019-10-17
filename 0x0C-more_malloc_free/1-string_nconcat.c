#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - Write a function that returns the length of a string.
 * @s: take an pointer
 * Return: the index of the array
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	i++;
	return (i);
}

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: bytes
 * Return: the string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1Len = 0, s2Len = 0;

	if (s1 == NULL)
		s1 = "";
	s1Len = _strlen(s1);

	if (s2 == NULL)
		s2 = "";
	s2Len = _strlen(s2);

	if (n >= s2Len)
		n = s2Len;

	str = malloc(s1Len * sizeof(char) + n + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	if (s2Len < n)
	{
		for (j = 0; s2[j] != '\0'; j++, i++)
			str[i] = s2[j];
	}
	for (j = 0; j < n; j++, i++)
		str[i] = s2[j];

	str[i] = '\0';
	return (str);
}
