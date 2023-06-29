#include "main.h"

/**
 * @dest is the destnation src is string to be contacinated to dest. 
 * @ptr is the pointer to dest to count and store location.
 *
 * _strncat - concatenate two strings
 * return: dest
 *
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src !=  '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
