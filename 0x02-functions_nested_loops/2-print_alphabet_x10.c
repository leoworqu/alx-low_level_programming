#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char i = 'a';
	int count = 0;
	
	while(count < 10)
	{
		while(i <= 'z')
		{
			_putchar(i);
			i++;
		}
		count++;
		_putchar('\n');
	}
}