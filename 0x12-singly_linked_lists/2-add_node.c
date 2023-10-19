#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: head of the list
 * @str: string to add of the list
 * Return: NULL or address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *beginNode = (list_t *)malloc(sizeof(list_t));

	if (beginNode == NULL)
		return (NULL);
	if (head == NULL || str == NULL)
		return (NULL);

	beginNode->str = strdup(str);
	beginNode->len = (beginNode->str == NULL ? 0 : strlen(beginNode->str));
	beginNode->next = *head;
	*head = beginNode;

	return (beginNode);
}
