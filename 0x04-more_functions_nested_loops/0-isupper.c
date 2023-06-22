#include "main.h"

/**
 * Description: Checks weather the input c is Upercase 
 *
 * Return: 1 if True
 * Return: 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A'&& c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
