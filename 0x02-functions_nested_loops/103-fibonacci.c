#include <stdio.h>
/**
  * main - entry block
  * @void: no argument
  * Return: 0
  */
int main(void)
{
	unsigned long int first, second, next, even;

	first = 1;
	second = 2;
	next = 0;
	even = 2;

	while (next <= 4000000)
	{
		next = first + second;
		first = second;
		second = next;
		if (next % 2 == 0)
		{
			even += next;
		}
	}
	printf("%lu\n", even);
	return (0);
}
