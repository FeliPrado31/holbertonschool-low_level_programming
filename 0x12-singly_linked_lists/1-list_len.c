#include "lists.h"

/**
 * list_len - function that returns
 * the number of elements in a linked list_t list.
 * @h: pointer to constant list
 * Return: counter of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *node = h;

	if (node)
	{
		while (node != NULL)
		{
			node = node->next;
			count++;
		}
	}
	else
	{
		return (0);
	}
	return (count);
}
