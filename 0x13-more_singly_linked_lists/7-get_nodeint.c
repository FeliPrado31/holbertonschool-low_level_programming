#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node
 * @head: node
 * @index: count
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	node = head;
	while (node && i < index)
	{
		node = node->next;
		i++;
	}
	return (node);
}
