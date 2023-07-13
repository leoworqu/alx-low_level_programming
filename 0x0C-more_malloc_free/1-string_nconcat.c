#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes to concatenate from s2
 *
 * Return: Pointer to the concatenated string
 *         NULL if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int s1_len, s2_len, concat_len, i, j;

	s1_len = (s1 != NULL) ? strlen(s1) : 0;
	s2_len = (s2 != NULL) ? strlen(s2) : 0;
	concat_len = (n >= s2_len) ? s1_len + s2_len : s1_len + n;

	concat = malloc(sizeof(char) * (concat_len + 1));

	if (concat == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		concat[i] = s1[i];
	for (j = 0; j < n && j < s2_len; j++)
		concat[i++] = s2[j];

	concat[i] = '\0';
	return (concat);
}
