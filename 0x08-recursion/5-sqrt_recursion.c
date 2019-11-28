#include "holberton.h"
/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: takes in an integer
  * Return: a starting number and n to compare
  */
int _sqrt_recursion(int n)
{
	return (helper_julien(1, n));
}
/**
  * helper_julien - helps to find square root
  * @x: takes in an integer
  * @y: takes in an integer
  * Return: return x compared to y
  */
int helper_julien(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x > y)
	{
		return (-1);
	}
	else
	{
	return (helper_julien(x += 1, y));
	}
}
