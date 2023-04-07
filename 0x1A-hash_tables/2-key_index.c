#include "hash_tables.h"

/**
 * key_index - Find index where key/value pair is to be stored
 in hash table.
 * @key: The index of this number.
 * @size: Hash table array size.
 *
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
