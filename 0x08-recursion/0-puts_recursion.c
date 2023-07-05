#include "main.h"

/*
 * @s a character
 * _puts_recursion - recursive function to print strings line by line
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
