#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t linked list and sets the head to NULL.
 * @head: Double pointer to the head of the linked list.
 *
 * Description: This function frees the memory allocated for each node
 *              in a listint_t linked list and sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
