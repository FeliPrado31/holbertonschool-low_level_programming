#include "hash_tables.h"

/**
 * addNode - add node
 * @stack: stack
 * @key: key
 * @value: store
 * Return: stack
 */
hash_node_t *addNode(hash_node_t **stack, const char *key, const char *value)
{
	hash_node_t *node;

	node = *stack;

	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (*stack);
		}
		node = node->next;
	}

	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (NULL);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = *stack;
	*stack = node;

	return (*stack);
}
/**
 * hash_table_set - adds a hash
 * @ht: pointer to the hash table
 * @key: key of the hash
 * @value: value to store
 * Return: 1 if successes, 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (addNode(&(ht->array[index]), key, value) == NULL)
		return (0);

	return (1);
}
