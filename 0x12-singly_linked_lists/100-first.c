#include <stdio.h>

/**
 * before_main - Prints a specific message before the main function is 
 * executed
 *
 * Description: This function is executed automatically before 
 * the main function
 *              is called. It prints the message 
 *              "You're beat! and yet, you must allow,"
 *              and "I bore my house upon my back!" to the standard output.`:wq
 *
 *
 * Return: None
 */

void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
