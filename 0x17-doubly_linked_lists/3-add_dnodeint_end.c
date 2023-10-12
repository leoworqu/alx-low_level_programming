#include "lists.h"

/**
 * add_dnodeint_end - add nod at the end of the list
 * @head: pointer to the first nod of zee list
 * @n: data to be stored in ze list
 * Return: pointer to the new last node
**/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *f;

	if (head == NULL)
		return (NULL);
	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	f = *head;
	while (f->next)
		f = f->next;
	f->next = new;
	new->prev = f;
	return (new);
}
