#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str:int i; input
 * Return: half of input
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}
	for (i = (length + 1) / 2; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
