#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	char *ptr = s1;

	while (*ptr == *s2 && *ptr != '\0')
	{
		ptr++;
		s2++;
	}
	return (*ptr - *s2);
}
