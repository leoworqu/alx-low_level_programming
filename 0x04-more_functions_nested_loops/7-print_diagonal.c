#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		while (i < n)
		{
			int j = 0;

			while (j < n)
			{
				if (j == i)
				{
					_putchar ('\\');
				}
				else if (j < i)
				{
					_putchar (' ');
				}
				j++;
			}
			_putchar ('\n');
			i++;
		}
	}
}
