#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints values based on the given format
 * @format: The format string specifying the types of values to print
 *
 * Description:
 * This function takes a format string and a variable number of arguments, and
 * prints the values based on the format string. The format string can contain
 * the following specifiers: 'c' (for characters), 'i' (for integers), 'f'
 * (for floats), and 's' (for strings). Any other specifiers will be ignored.
 * The function loops through the format string and retrieves the corresponding
 * values from the argument list using the va_arg macro. The retrieved values
 * are then printed to the standard output with appropriate formatting. If a
 * NULL string is encountered, it is printed as "(nil)". The function does not
 * return any value.
 *
 * Return: None
 */

void print_all(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	while (format && *format)
	{
		if (*format == 'c')
			printf("%c", va_arg(args, int));
		else if (*format == 'i')
			printf("%d", va_arg(args, int));
		else if (*format == 'f')
			printf("%f", va_arg(args, double));
		else if (*format == 's')
		{
			char *s = va_arg(args, char*);
			printf("%s", s ? s : "(nil)");
		}
		if (*(format + 1) && (*format == 'c' || *format == 'i' ||
					*format == 'f' || *format == 's'))
			printf(", ");
		format++;
	}
	printf("\n");
	va_end(args);
}
