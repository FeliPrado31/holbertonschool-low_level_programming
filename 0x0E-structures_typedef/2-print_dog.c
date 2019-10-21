#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - Write a function that prints a struct dog
 * @
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nill)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if(d->owner == NULL)
			printf("Owner: (nill)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
	else
		return;
}
