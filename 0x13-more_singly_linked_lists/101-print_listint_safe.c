#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *loop_node = NULL;
	size_t count = 0;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current->next >= current)
		{
			loop_node = current->next;
			printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
			exit(98);
		}

		current = current->next;
	}

	return (count);
}
