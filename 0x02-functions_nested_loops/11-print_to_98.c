#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */

void print_to_98(int n)
{
	n = 0;

	while (n < 99)
	{
		printf (n);
		printf (',');
		n++;
	}
}
