#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of list
 * Return: head's node data n or 0
 */

int pop_listint(listint_t **head)
{
	int save;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	save = (*head)->n;
	temp = (*head)->next;

	free(*head);
	*head = temp;

	return (save);
}
