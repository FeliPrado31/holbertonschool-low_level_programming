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
	return (i);
}
/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int s1Len, s2Len, totalLen, i;
	char *str;

	if (s1 == NULL)
		s1Len = 0;
	s1Len = _strlen(s1);
	if (s2 == NULL)
		s2Len = 0;
	s2Len = _strlen(s2);
	totalLen = s1Len + s2Len + 1;
	str = malloc(totalLen + sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < s1Len; i++)
		str[i] = s1[i];
	for (i = 0; i < s2Len; i++)
		str[i + s1Len] = s2[i];
	str[s1Len + s2Len] = '\0';
	return (str);

}
