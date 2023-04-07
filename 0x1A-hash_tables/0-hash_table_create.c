#include "hash_tables.h"

/**
 * hash_table_create - Make hash table.
 * @size: Array size
 *
 * Return: For error - NULL.
 * else - pointer to created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int k;

	ht = malloc(sizeof(hash_table_t));
	if (ht == 0)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == 0)
	{
		return (NULL);
	}
	for (k = 0; k < size; k++)
	{
		ht->array[k] = NULL;
	}
	return (ht);
}
