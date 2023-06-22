#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main()
{
	long long num = 612852475143;
	long long factor = 2;
	long long largest_factor = 0;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			num /= factor;
			largest_factor = factor;
        	}
		else 
		{
			factor++;
		}
	}

	printf("%lld\n", largest_factor);
	return 0;
}
