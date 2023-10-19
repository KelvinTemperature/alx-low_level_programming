#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: head of list
 * @str: string in the list
 * Return: Null or address of new element on success
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endNode;
	list_t *existNode;

	if (head == NULL || str == NULL)
		return (NULL);

	endNode = (list_t *)malloc(sizeof(list_t));
	if (endNode == NULL)
		return (NULL);

	endNode->str = strdup(str);
	endNode->len = (endNode->str == NULL ? 0 : strlen(endNode->str));
	endNode->next = NULL;

	if (*head == NULL)
	{
		*head = endNode;
	}
	else
	{
		existNode = *head;
		while (existNode->next != NULL)
			existNode = existNode->next;
	}
	existNode->next = endNode;

	return (endNode);
}
