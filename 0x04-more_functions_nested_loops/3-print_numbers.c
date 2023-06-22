#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar (i);
		i++;
	}
	_putchar('\n');
}
