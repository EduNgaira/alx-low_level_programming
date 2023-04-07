#include "hash_tables.h"

/**
 * hash_table_set - Update or ass hash table elements.
 * @ht: Pointer to hash table.
 * @key: A non-empty string key to be added.
 * @value: Value linked with key
 *
 * Return: Failure - 0.
 *         Success - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int index, k;

	if (ht == 0 || key == 0 || *key == '\0' || value == 0)
		return (0);

	value_copy = strdup(value);
	if (value_copy == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (k = index; ht->array[k]; k++)
	{
		if (strcmp(ht->array[k]->key, key) == 0)
		{
			free(ht->array[k]->value);
			ht->array[k]->value = value_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == 0)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == 0)
	{
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
