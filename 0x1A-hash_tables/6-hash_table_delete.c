#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *firstNode;
	hash_node_t *secondNode;

	if (ht == NULL)
		return;

	i = 0;
	while (i < ht->size)
	{
		firstNode = ht->array[i];
		while ((secondNode = firstNode) != NULL)
		{
			firstNode = firstNode->next;
			free(secondNode->key);
			free(secondNode->value);
			free(secondNode);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
