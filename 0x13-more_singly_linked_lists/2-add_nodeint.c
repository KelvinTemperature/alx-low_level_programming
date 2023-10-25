#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a list
 * @head: head of the list
 * @n: data of the list
 * Return: the address of the new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_beg_node;

	new_beg_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_beg_node == NULL)
		return (NULL);

	new_beg_node->n = n;
	new_beg_node->next = *head;

	*head = new_beg_node;

	return (*head);
}
