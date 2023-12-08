#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at the index
 * @h: head of list
 * @idx: index to work on
 * @n: the number to add
 * Return: new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	temp = *h;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = temp;
		if (temp != NULL)
			temp->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (temp != NULL)
	{
		if (count == idx)
		{
			new_node->prev = temp->prev;
			new_node->next = temp;
			if (temp->prev != NULL)
				temp->prev->next = new_node;
			temp->prev = new_node;
			return (new_node);
		}
		temp = temp->next;
		count++;
	}

	free(new_node);
	return (NULL);
}
