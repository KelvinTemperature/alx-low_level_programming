#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: head of list
 * @n: data of the list
 * Return: the address of the new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp_node, *end_node;

	end_node = (listint_t *)malloc(sizeof(listint_t));
	if (end_node == NULL)
		return (NULL);

	temp_node = *head;
	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		while (temp_node->next != NULL)
		{
			temp_node = temp_node->next;
		}
		temp_node->next = end_node;
	}

	return (end_node);
}
