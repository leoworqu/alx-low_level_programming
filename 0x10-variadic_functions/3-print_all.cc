#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on the given format
 * @format: The format of the arguments passed to the function
 *            c: char
 *            i: integer
 *            f: float
 *            s: char * (if the string is NULL, print (nil) instead)
 *            any other char should be ignored
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int n;
	char c;
	float f;
	char *s;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				n = va_arg(args, int);
				printf("%d", n);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' ||
					   format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
