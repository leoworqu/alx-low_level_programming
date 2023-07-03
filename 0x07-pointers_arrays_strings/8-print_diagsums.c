#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int b = 0;

	while (b < size)
	{
		sum1 += a[b * size + b];
		b++;
	}
	b = size - 1;

	while (b >= 0)
	{
		sum2 += a[b * size + (size - b - 1)];
		b--;
	}
	printf("%d, %d\n", sum1, sum2);
}
