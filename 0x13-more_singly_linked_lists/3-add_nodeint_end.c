#include "lists.h"

/**
 * listint_t - function that adds a new node
 * at the end of a listint_t list.
 * @head: node
 * @n: number
 * Return: new node 
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !new)
		return (NULL);

	new->next = NULL;
	new->n = n;

	if (!*head)
		*head = new;
	else
	{
		node = *head;

		while(node->next)
			node = node->next;
		node->next = new;
	}

	return (new);
}
