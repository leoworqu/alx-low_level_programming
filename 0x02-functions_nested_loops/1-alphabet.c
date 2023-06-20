#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

void  print_alphabet(void)
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

