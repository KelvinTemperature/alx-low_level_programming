#include "lists.h"

/**
 * print_listint - prints the elements of the lists
 * @h: head of the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *temp_node;

	temp_node = h;
	while (temp_node != NULL)
	{
		printf("%d\n", temp_node->n);
		temp_node = temp_node->next;
		node_count++;
	}
	return (node_count);
}
