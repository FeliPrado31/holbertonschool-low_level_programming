#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: take an pointer
 */
void free_list(list_t *head)
{
	list_t t;

	if (!head)
	{
		t = head;
		head = head->next;
		free(t->str);
		free(t);
	}
}
