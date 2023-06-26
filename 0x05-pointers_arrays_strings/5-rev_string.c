#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int len = 0;
	char *start, *end, temp;

	while (*(s + len) != '\0')
	{
		len++;
	}

	start = s;
	end = s + len - 1;

	while (end > start)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
