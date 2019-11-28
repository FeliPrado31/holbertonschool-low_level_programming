#include "holberton.h"
/**
  * is_prime_number - returns a prime number
  * @n: takes in an integer
  * Return: return 2 instead of 1
  */
int is_prime_number(int n)
{
	if (n == 1 || n < 0)
		return (0);
	return (helper_prime(2, n));
}
/**
  * helper_prime - helps find the prime number
  * @i: takes in an integer
  * @n: takes in an integer
  * Return: increment i and compare to n
  */
int helper_prime(int i, int n)
{
	if (n == i)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (helper_prime(i + 1, n));
}
