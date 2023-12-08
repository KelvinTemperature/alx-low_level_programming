#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at the given index
 * @head: head of the list
 * @index: given index
 * Return: 1 or -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (count < index && temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (-1);

	temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);

	return (1);
}
