#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: head of the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *newList = h;
	size_t i = 0;

	while (newList != NULL)
	{
		if (newList->str == NULL)
		{
			printf("[%d] (%s)\n", 0, "nil");
		}
		else
		{
			printf("[%u] %s\n", newList->len, newList->str);
		}
		newList = newList->next;
		i++;
	}

	return (i);
}
