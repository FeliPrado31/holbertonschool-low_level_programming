#include "holberton.h"
/**
  * _isalpha - checks for alphabetic character
  * @c: takes in a character
  * Return: 1 if is uppercase or lowcase and 0 for other
  */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
