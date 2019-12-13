#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a specific index
 * @idx: index to insert at
 * @h: head of dlistint_t
 * @n: number for new node
 *
 * Return: Returns address to the new dnodeint, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *node, *tmp;
	unsigned int i;

	if (h == NULL && idx != 0)
		return (NULL);
	new = *h;
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		if (new != NULL)
		{
			node->next = new;
			new->prev = node;
		}
		else
			node->next = NULL;
		node->prev = NULL; *h = node;
		return (*h);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (new == NULL)
		{
			free(node); return (NULL);
		}
		new = new->next;
	}
	if (new == NULL)
	{
		free(node); return (NULL);
	}
	tmp = new;
	new = new->next;
	tmp->next = node;
	node->next = new;
	node->prev = tmp;
	return (node);
}
