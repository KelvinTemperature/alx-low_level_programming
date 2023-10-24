#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at an index
 * @head: head of list
 * @index: index of the list to delete
 * Return: 1 on success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp_node, *next_node;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
	else
	{
		temp_node = *head;
		for (i = 0; i < index - 1; i++)
		{
			temp_node = temp_node->next;
			if (temp_node == NULL || temp_node->next == NULL)
				return (-1);
		}
		next_node = temp_node->next;
		temp_node->next = next_node->next;
		
		free(next_node);
	}
	
	return (1);
}
