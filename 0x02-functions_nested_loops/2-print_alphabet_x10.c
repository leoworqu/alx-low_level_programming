#include "main.h"

/**
 * main - check the code.
 * prints alphabet 10 times
 * Return: Always 0.
 */

/**
 * prints alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		count++;
		_putchar('\n');
	}
}
