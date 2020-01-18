#include "hash_tables.h"

/**
  * hash_table_create - function that creates a hash table.
  * @size: size of the array
  * Return: hash table
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *table;
	hash_node_t **node;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	node = malloc(sizeof(hash_node_t *) * size);

	if (node == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		node[i] = NULL;
		i++;
	}

	table->size = size;
	table->array = node;
	return (table);
}
