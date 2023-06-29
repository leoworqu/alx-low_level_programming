#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int destLen = 0;
	int i = 0;

	while (dest[destLen] != '\0')
	{
		destLen++;
	}

	while (src[i] != '\0' && i < n)
	{
		dest[destLen + i] = src[i];
		i++;
	}
	dest[destLen + i] = '\0';
	return (dest);
}
