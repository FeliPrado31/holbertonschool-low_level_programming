#include "lists.h"
#include <string.h>

/**
 * _strlen - Write a function that returns the length of a string.
 * @s: take an pointer
 * Return: the index of the array
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * add_node - function that adds a
 * new node at the beginning of a list_t list.
 * @head: pointer to pointer
 * @str: name
 * Return: the address of the new element
 * , or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (str)
	{
		new->str = strdup(str);
		if (new->str == NULL)
		{
			free(new);
			return (NULL);
		}
		new->len = _strlen(str);
	}
	new->next = *head;
	*head = new;
	return (head);
}
