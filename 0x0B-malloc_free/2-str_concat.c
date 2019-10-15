#include<stdio.h>
#include<stdlib.h>
#include"holberton.h"
/**
* str_concat - concatenates two strings
* @s1: char s1
* @s2: char s2
*
* Return: arr
*/
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i, j, k, l;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	arr = malloc(sizeof(*arr) * (i + j + 1));
	if (arr == NULL)
	{
		return ('\0');
	}
	for (k = 0; k < i; k++)
	{
		arr[k] = s1[k];
	}
	for (l = 0; l < j; l++)
	{
		arr[i + l] = s2[l];
	}
	return (arr);
}
