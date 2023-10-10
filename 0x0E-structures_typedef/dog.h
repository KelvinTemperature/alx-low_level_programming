#ifndef DOG_H
#define DOG_H

/**
 * dog_t - new type for struct dog
 */

typedef struct dog dog_t;

/**
 * struct dog - Houses the properties of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
