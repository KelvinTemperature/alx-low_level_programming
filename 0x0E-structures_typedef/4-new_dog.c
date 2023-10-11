#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(name));

	if (new_dog->name == NULL)
	{
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(owner));

	if (new_dog->owner == NULL)
	{
		return (NULL);
	}

	new_dog->name = name;
	new_dog->age = age;

	return (new_dog);
}
