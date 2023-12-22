#include "hash_tables.h"

/**
 * key_index - generates the index at which the key/value is store in ht
 * @size: size of ht
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
