#include "lists.h"

/**
 * sum_dlistint - sum of the data in a linked list
 * @head: head of the list
 * Return: sum or 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
