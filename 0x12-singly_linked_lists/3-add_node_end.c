#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: list_t
 * @str: char
 * Return: number of nodes.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *i;
	int lenght = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[lenght] != '\0')
		lenght++;

	new->str = strdup(str);
	new->len = lenght;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		i = *head;
		while (i->next != NULL)
			i = i->next;
		i->next = new;
	}

	return (*head);
}
