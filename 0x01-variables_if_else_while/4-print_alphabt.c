#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'o' || alphabet != 'q')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
