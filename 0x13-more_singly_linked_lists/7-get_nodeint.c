#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: head of list
 * @index: index of the node
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	temp_node = head;
	for (i = 0; i < index && temp_node != NULL; i++)
	{
		temp_node = temp_node->next;
	}

	return (temp_node);
}
