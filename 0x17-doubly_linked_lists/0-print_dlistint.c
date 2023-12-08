#include "lists.h"

/**
 * print_dlistint - prints all the element of a list
 * @h: head node of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	int node;

	temp = h;
	for (node = 0; temp != NULL; node++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (node);
}
