#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of the list
 * Return: pointer to the first node reversed
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node, *prev_node = NULL;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}

	*head = prev_node;

	return (*head);
}
