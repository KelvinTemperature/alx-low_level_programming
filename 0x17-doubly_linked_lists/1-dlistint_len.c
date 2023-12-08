#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head of the list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int elem;

	temp = h;
	for (elem = 0; temp != NULL; elem++)
	{
		temp = temp->next;
	}

	return (elem);
}
