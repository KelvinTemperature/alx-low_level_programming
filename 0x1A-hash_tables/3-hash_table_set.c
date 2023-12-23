#include "hash_tables.h"

/**
 * hash_table_set - inserts the ky/value pair to an index on the ht
 * @ht: hash table
 * @key: the key
 * @value: value associated with key
 * Return: 1 on success or 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *point;
	hash_node_t *tmp;
	unsigned long int index;

	point = malloc(sizeof(hash_node_t));
	if (point == NULL)
		return (0);

	point->key = strdup(key);
	point->value = strdup(value);
	point->next = NULL;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		free(point);
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array == NULL)
	{
		free(point);
		return (0);
	}

	tmp = ht->array[index];

	if (ht->array[index] == NULL)
		ht->array[index] = point;
	else
	{
		point->next = tmp;
		ht->array[index] = point;
	}

	return (1);
}
