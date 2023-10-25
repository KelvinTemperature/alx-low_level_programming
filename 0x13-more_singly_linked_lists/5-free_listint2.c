#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head of list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_node, *temp;

	if (head != NULL)
	{
		temp_node = *head;

		while (temp_node != NULL)
		{
			temp = temp_node->next;
			free(temp_node);
			temp_node = temp;
		}

		*head = NULL;
	}
}
