#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int a = 0, c;

	while (a < 10)
	{
		int b = 0;

		while (b < 10)
		{
			c = a * b;
			_putchar(' ');
			_putchar(c + '0');
			_putchar(',');
		}
		_putchar('\n')'
	}
}
