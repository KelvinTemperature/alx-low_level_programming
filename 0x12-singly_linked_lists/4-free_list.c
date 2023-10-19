#include "lists.h"

/**
 * free_list - frees the list created
 * @head: head of the list
 */

void free_list(list_t *head)
{
	list_t *temp;
	list_t *iNode;

	iNode = head;
	while (iNode != NULL)
	{
		temp = iNode;
		iNode = iNode->next;
		free(temp);
	}
}
