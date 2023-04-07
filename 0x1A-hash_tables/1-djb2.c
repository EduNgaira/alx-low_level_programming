#include "hash_tables.h"

/**
 * hash_djb2 - Hash function for djb2 algorithm implementation
 * @str: Hash string
 *
 * Return: Final hash calculated
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int j;

	hash = 5381;
	while ((j = *str++))
	{
		hash = ((hash << 5) + hash) + j;
		/* hash * 33 + j */
	}
	return (hash);
}
