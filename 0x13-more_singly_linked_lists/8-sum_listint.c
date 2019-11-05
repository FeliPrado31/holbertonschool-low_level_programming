#include "lists.h"

/**
 * sum_listint - return the sum of all of the data
 * @head: node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
