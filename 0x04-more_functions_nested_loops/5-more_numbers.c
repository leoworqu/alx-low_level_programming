#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int i = 0;

	while (i <= 10)
	{
		int j = 0;

		while (j < 15)
		{
			if (j > 9)
			{
				_putchar ('1');
			}
			_putchar ((j % 10) + '0');
			j++;
		}
		_putchar ('\n');
		i++;
	}
}
