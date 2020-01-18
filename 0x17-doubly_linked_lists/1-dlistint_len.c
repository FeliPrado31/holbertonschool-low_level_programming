#include "lists.h"
/**
 * dlistint_len - Write a function that returns
 * the number of elements in a linked dlistint_t list.
 * @h: Node
 * Return: elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *tmp;
	int i;

	if (h == NULL)
		return (0);
	tmp = h->prev;
	i = 1;
	while (tmp != NULL)
		i++, tmp = tmp->prev;
	tmp = h->next;
	while (tmp != NULL)
		i++, tmp = tmp->next;

	return (i);
}
