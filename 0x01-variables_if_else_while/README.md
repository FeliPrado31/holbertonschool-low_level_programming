# 0. Positive anything is better than negative nothing mandatory
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.

* You can find the source code [here](https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c)
* The variable n will store a different value every time you will run this program
* You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
* The output of the program should be:
* The number, followed by
* if the number is greater than 0: is positive
* if the number is 0: is zero
* if the number is less than 0: is negative
* followed by a new line

```c
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * checkNumber - Check if a number is positive, negative or zero
 * @number: The int variable to check
 */
void checkNumber(int number)
{
	if (number > 0)
		printf("%d is positive\n", number);
	else if (number == 0)
		printf("%d is zero\n", number);
	else
		printf("%d is negative\n", number);
}
/**
 * main - Generate a random number
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
```

# 1. The last digit mandatory
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.

* You can find the source code [here](https://github.com/holbertonschool/0x01.c/blob/master/1-last_digit_c)
* The variable n will store a different value every time you run this program
* You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
* The output of the program should be:
* The string Last digit of, followed by
* n, followed by
* the string is, followed by
* if n is greater than 5: the string and is greater than 5
* if n is 0: the string and is 0
* if n is less than 6 and not 0: the string and is less than 6 and not 0
* followed by a new line

```c
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * obtain_last_number - Obtain the last number for check
 * @number: The int variable to check
 */
void obtain_last_number(int number)
{
	int last;

	last = number % 10;

	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n",
				number, last);
	else if (last < 6 && last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n"
				, number, last);
	else
		printf("Last digit of %d is %d and is 0\n"
				, number, last);
}
/**
 * main - Generate a random number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	obtain_last_number(n);
	return (0);
}
```
