#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */

int main(void)
{
        char alphabet = 'a'
	char alphabetCapital = 'A';

        while (alphabet <= 'z')
        {
                putchar(alphabet);
                alphabet++;
        }
	while (alphabetCapital <= 'Z')
        {
                putchar(alphabetCapital);
                alphabetCapital++;
        }
        putchar('\n');
        return (0);
}
