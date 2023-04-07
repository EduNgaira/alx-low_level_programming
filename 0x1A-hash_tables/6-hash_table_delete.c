#include "hash_tables.h"

/**
 * hash_table_delete - Deletes hash table.
 * @ht: Hash table pointer
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *store;
	unsigned long int k;

	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != 0)
		{
			node = ht->array[k];
			while (node != 0)
			{
				store = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = store;
			}
		}
	}
	free(head->array);
	free(head);
}
