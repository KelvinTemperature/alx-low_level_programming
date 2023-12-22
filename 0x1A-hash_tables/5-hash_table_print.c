#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned char comma_flag;
	hash_node_t *content;

	if (ht == NULL)
		return;

	comma_flag = 0;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			content = ht->array[i];
			while (content != NULL)
			{
				printf("'%s': '%s'", content->key, content->value);
				content = content->next;
				if (content != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
