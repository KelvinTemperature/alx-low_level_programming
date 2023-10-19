#include "lists.h"

/**
 * list_len - returnd the number of elements in a linked list
 * @h: head of the list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *newList = h;
	size_t n = 0;

	while (newList != NULL)
	{
		newList = newList->next;
		n++;
	}
	return (n);
}
