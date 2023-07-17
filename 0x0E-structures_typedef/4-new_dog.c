#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog object.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner of the dog.
 *
 * Return: Point to the new created dog object, or NULL if the function fails.
 *
 * Description: This function creates a new dog object by allocating memory and
 * copying the provided name and owner strings. It returns a pointer to the
 * newly created dog object. If the function fails to allocate memory or if any
 * of the input parameters are NULL, it returns NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (name == NULL || owner == NULL)
		return (NULL);
	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);
	newDog->name = malloc(strlen(name) + 1);

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	strcpy(newDog->name, name);
	newDog->age = age;
	newDog->owner = malloc(strlen(owner) + 1);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	strcpy(newDog->owner, owner);
	return (newDog);
}
