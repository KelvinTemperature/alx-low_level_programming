#include "lists.h"

/**
 * sum_listint - sum all the data of the list
 * @head: head of the list
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp_node;

	if (head == NULL)
		return (0);

	temp_node = head;

	while (temp_node != NULL)
	{
		sum += temp_node->n;
		temp_node = temp_node->next;
	}

	return (sum);
}
