#include "main.h"

/**
 * main - print _putchar
 *
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char i = 'a';
	/**
	 * prints the alphabet
	 */
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

