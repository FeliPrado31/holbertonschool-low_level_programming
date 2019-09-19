#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * checkNumber - check if a number is positive, negative or zero 
 *
 * number - the int variable to check
 */ 
void checkNumber(int number)
{
	if (number > 0)
		printf("%d the number is positive\n", number);
	else if (number == 0)
		printf("%d the number is zero\n", number);
	else
		printf("%d the number is negative\n", number);
}
/**
 * main - generate a random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	checkNumber(n);
	return (0);
}
