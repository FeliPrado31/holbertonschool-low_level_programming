#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to constant list
 * Return: counter of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *node = h;

	if (node == NULL)
		return (0);
	while (node != NULL)
	{
		printf("[%d] %s\n", node->len, node->str);
		node = node->next;
		count++;
	}

	return (count);
}
