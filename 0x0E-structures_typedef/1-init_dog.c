#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Initializes a struct dog with given values
 * @d: Pointer to the struct dog variable
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
