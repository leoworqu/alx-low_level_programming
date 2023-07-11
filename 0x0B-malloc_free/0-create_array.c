#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars and
 * initializes it with a specific char.
 *
 * @size: The size of the array to be created.
 * @c: The specific char to initialize the array with.
 *
 * Return: On success, returns a pointer to
 * the created array. Returns NULL if size is 0 or if memory allocation fails.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
