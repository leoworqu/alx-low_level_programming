#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = i;
		while (j <= 9)
		{
			putchar(i + '0');
			putchar(',');
			putchar(j + '0');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
