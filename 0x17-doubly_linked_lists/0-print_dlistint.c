#include "lists.h"

/**
 * print_dlistint
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *tmp;
	int i;

	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	tmp = h->prev;
	i = 1;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->prev;
		i++;
	}
	tmp = h->next;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}

	return (i);
}
