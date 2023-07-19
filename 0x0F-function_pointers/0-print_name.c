#include "function_pointers.h"

/**
 * print_name - Prints the provided name using a given function.
 * @name: The name to be printed.
 * @f: A function pointer to the desired print function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
