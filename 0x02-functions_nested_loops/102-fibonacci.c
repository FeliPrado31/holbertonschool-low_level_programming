#include <stdio.h>
/**
  * main - entry block
  * @void: no argument
  * Return: 0
  */
int main(void)
{
	long int counter;
	long int curr = 2;
	long int prev = 1;
	long int sum = 0;

	printf("%lu, ", prev);
	printf("%lu, ", curr);

	for (counter = 3; counter < 49; counter++)
	{
		sum = prev + curr;
		prev = curr;
		curr = sum;
		if (counter < 48)
		{
			printf("%lu, ", sum);
		}
		else
		{
			 printf("%lu\n", sum);
		}
	}
	return (0);
}
