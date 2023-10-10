#include "dog.h"

/**
 * init_dog - initialize the dog struct
 * @d: pointer to the unique dog
 * @name: of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d = {name, age, owner};
}
