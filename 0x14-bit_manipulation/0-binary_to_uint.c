#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted unsigned int, or 0 if b is NULL or contains
 *         characters other than 0 and 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (result);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (result);
		result = result * 2 + (*b - '0');
		b++;
	}

	return (result);
}
