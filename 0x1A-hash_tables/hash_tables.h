#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Hash table node
 * @key: The key which is a string and unique in the HashTable
 * @value: Value which corresponds to key
 * @next: Pointer to next node on List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
}
hash_node_t;

/**
 * struct hash_table_s - Data structure of hash table
 * @size: Array size
 * @array: Array of size mentioned above
 * Each cell of the array is a pointer to the first node of a linked list,
 * reason is we want the HashTable to employ chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
}
hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/**
 * struct shash_node_s - Sorted hash table node
 * @key: The key, string unique in the HashTable
 * @value: Value which corresponds to a key
 * @next: A pointer to the next node of the List
 * @sprev: Pointer to the previous element of the sorted linked list
 * @snext: Pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
}
shash_node_t;

/**
 * struct shash_table_s - Hash table data structure that is sorted
 * @size: Array size
 * @array: Array of size mentiones above
 * Each array cell is a pointer to the first node of a linked list,
 * as we want our HashTable to employ chaining collision handling
 * @shead: Pointer to the initial element of the sorted linked list
 * @stail: Pointer to the terminating element of the sorted linked list
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
}
shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif /* HASH_TABLES_H */
