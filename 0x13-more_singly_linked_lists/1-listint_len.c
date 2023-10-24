#include "lists.h"

/**
 * listint - returns the number of elements in a list
 * @h: head of the list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elem_count = 0;

	while (h != NULL)
	{
		elem_count++;
		h = h->next;
	}
	return (elem_count);
}
