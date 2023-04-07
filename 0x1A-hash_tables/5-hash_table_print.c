#include "./hash_tables.h"

/**
 * hash_table_print - Print hash table.
 * @ht: Pointer to hash table to be printed.
 *
 * Description: Print of key/value pairs is in order of appearance
 *		they appear in the array of the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int k;
	unsigned char comma_flag = 0;

	if (ht == 0)
	{
		return;
	}
	printf("{");
	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			if (comma_flag == 1)
			{
				printf(", ");
			}
			node = ht->array[k];
			while (node != 0)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != 0)
				{
					printf(", ");
				}
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
