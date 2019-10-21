#include <stdlib.h>
#include "dog.h"

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
	i++;
	return (i);
}

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nameLen, ownerLen, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	nameLen = _strlen(name);
	dog->name = malloc(nameLen * sizeof(char));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i < nameLen; i++)
		dog->name[i] = name[i];

	dog->age = age;

	ownerLen = _strlen(owner);

	dog->owner = malloc(ownerLen * sizeof(char));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < ownerLen; i++)
		dog->owner[i] = owner[i];

	return (dog);
}
