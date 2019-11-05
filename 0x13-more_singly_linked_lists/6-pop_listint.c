#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: nodes
 * Return: count
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int count;

	if (!head || !node)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (count);
}
