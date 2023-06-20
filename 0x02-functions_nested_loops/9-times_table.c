#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int a = 0;

	while (a < 10)
	{
		int b = 0;

		while (b < 10)
		{
			int c = a * b;

			if (c < 10)
			{
				_putchar(' ');
				_putchar(c + '0');
			}
			else 
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
