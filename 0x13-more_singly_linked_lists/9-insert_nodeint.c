#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: head of list
 * @idx: index of list where node should be added
 * @n: data to add to node
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp_node, *iNode;

	if (*head == NULL)
		return (NULL);

	iNode = (listint_t *)malloc(sizeof(listint_t));
	if (iNode == NULL)
		return (NULL);
	iNode->n = n;

	temp_node = *head;

	for (i = 0; i < idx - 1; i++)
	{
		temp_node = temp_node->next;
	}
	iNode->next = temp_node->next;
	temp_node->next = iNode;

	return (iNode);
}
