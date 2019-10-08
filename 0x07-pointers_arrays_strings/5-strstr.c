#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - Write a function that locates a substring.
 * @haystack: pointer
 * @needle: pointer
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *response;
	char *tmp = needle;

	while (*haystack != '\0')
	{
		needle = tmp;
		response = haystack;
		while (*needle != '\0' && *haystack != '\0' && *haystack == *needle)
		{
			needle++;
			haystack++;
		}
		if (*needle == '\0')
			return (response);
		haystack = response + 1;
	}
	return (NULL);
}
