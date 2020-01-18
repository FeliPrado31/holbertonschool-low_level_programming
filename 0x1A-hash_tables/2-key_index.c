#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: is the key
 * @size: size of the array of the hash table
 * Return: index at which the key/value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 0, i = 0;

	hash = hash_djb2(key);
	i = hash % size;
	return (i);
}

