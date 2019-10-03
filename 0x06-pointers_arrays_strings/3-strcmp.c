/*
 * The  strcmp()  function compares the two strings s1 and s2.
 It returns an integer less than,
 equal to,
 or greater than zero if  s1  is  found,
 respectively,
 to be less than,
 to match,
 or be greater than s2.
 */

#include "holberton.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: the count
 */
int _strcmp(char *s1, char *s2)
{
	char c1, c2;

	do {
		c1 = *s1++;
		c2 = *s2++;
		if (c1 == '\0')
			return (c1 - c2);
	} while (c1 == c2);

	return (c1 - c2);
}
