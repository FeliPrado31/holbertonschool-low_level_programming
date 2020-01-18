#include "hash_tables.h"

/**
 * hash_table_print - prints the keys and values of the hash table
 * @ht: pointer
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char *delit;

	if (ht == NULL)
		return;

	printf("{");
	delit = "";

	i = 0;
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("%s'%s': '%s'", delit, node->key, node->value);
			delit = ", ";
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}
