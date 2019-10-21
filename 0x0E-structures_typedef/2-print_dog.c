#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - Write a function that prints a struct dog
 * @
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nill)";
	if (d->owner == NULL)
		d->owner = "(nill)";
	prinft("Name: %s\n", d->name);
	prinft("Age: %f\n", d->age);
	prinft("Owner: %s\n", d->owner);
}
