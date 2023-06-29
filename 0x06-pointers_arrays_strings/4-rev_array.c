#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *ptr = a + n - 1;
	int temp;

	for (int i = 0; i < n / 2; i++)
	{
		temp = *(ptr - i);
		*(ptr - i) = *(a + i);
		*(a + i) = temp;
	}
}
