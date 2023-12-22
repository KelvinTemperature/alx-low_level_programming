#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value assciataed with a key
 * @ht: hash table
 * @key: key to lookup
 * Return: value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx;
	hash_node_t *node;
	char *val;

	if (ht == NULL || key == NULL)
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);

	node = ht->array[indx];

	if (node == NULL)
		val = NULL;
	else
	{
		if (strcmp(node->key, key) == 0)
			val = node->value;
	}

	return (val);
}
