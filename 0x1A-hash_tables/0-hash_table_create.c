#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size of the table
 * Return: pointer to the new table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *brand_new_ht;
	unsigned long int i;

	brand_new_ht = malloc(sizeof(hash_table_t));
	if (brand_new_ht == NULL)
		return (NULL);

	brand_new_ht->size = size;
	brand_new_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (brand_new_ht->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		brand_new_ht->array[i] = NULL;

	return (brand_new_ht);
}
