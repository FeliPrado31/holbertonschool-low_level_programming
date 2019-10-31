#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the first element of the list.
 * @str: String to be contained by the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
