#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a list
 * @head: head of the list
 * @n: int to add
 * Return: address of new node or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
