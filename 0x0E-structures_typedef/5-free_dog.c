#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog object.
 * @d: Pointer to the dog object to be freed.
 *
 * Description: This function frees the memory allocated for a dog object,
 * including the dynamically allocated name and owner strings.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
