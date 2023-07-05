#include "main.h"

/*
 * _puts_recursion - recursive function to print strings line by line
 * @s: character string
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(s + 1);
}
