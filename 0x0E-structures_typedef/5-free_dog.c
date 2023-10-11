#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: dogs
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
