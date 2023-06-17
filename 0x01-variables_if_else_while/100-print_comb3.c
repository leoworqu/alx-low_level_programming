#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 9)
	{
		int j = i + 1;

		while (j < 9)
		{
			putchar(i , '0');
			putchar(j , '0');
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	puchar('\n');
	return (0);
}
