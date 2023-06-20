#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int a)
{
	if (a < 0)
	{
		a = a * -1;
	}

	int n = a % 10;

	_putchar(n + '0');
	return (n);
}
