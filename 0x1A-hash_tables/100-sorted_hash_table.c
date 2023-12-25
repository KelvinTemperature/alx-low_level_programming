#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the shash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht_s;
	unsigned long int i;

	ht_s = malloc(sizeof(shash_table_t));
	if (ht_s == NULL)
		return (NULL);
	ht_s->array = malloc(sizeof(shash_node_t *) * size);
	if (ht_s->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ht_s->array[i] = NULL;

	ht_s->size = size;
	ht_s->shead = NULL;
	ht_s->stail = NULL;

	return (ht_s);
}

/**
 * shash_table_set - adds an element to a  shash table
 * @ht: shash table
 * @key: key to set
 * @value: value to set
 * Return: 1 on success, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *temp;
	char *value_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = value_copy;
			return (1);
		}
		temp = temp->snext;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(value_copy);
		free(new_node);
		return (0);
	}
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		new_node->sprev = temp;
		new_node->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = new_node;
		else
			temp->snext->sprev = new_node;
		temp->snext = new_node;
	}
	return (1);
}

/**
 * shash_table_get - gets a value associated with a key in a shash table
 * @ht: the shash table
 * @key: key the check for
 * Return: value on success or NULL
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *point;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	point = ht->shead;
	while (point != NULL && strcmp(point->key, key) != 0)
		point = point->snext;

	return ((point == NULL) ? NULL : point->value);
}

/**
 * shash_table_print - prints a shash table in order
 * @ht: the shash table to print
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *point;

	if (ht == NULL)
		return;

	point = ht->shead;
	printf("{");
	while (point != NULL)
	{
		printf("'%s': '%s'", point->key, point->value);
		point = point->snext;
		if (point != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print a shash table in reverse order
 * @ht: the shash table to print
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *point;

	if (ht == NULL)
		return;

	point = ht->stail;
	printf("{");
	while (point != NULL)
	{
		printf("'%s': '%s'", point->key, point->value);
		point = point->sprev;
		if (point != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a shash table
 * @ht: the shash table to delete
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *point, *temp;

	if (ht == NULL)
		return;

	point = ht->shead;
	while (point)
	{
		temp = point->snext;
		free(point->key);
		free(point->value);
		free(point);
		point = temp;
	}

	free(head->array);
	free(head);
}
