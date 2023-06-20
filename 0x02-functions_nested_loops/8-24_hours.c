#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hours = 0;

	while (hours < 24)
	{
		int minute = 0;

		while (minute < 60)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchat(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
			minute++;

		}
		hours++;

	}
}
