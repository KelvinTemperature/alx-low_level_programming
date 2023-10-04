#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: arg count
 * @av: arg array
 * Return: concat string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += strlen(av[i]);
	str = malloc(sizeof(char) * (len + ac + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			str[k] = av[i][j];
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);

}
