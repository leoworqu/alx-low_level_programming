#include "lists.h"
/**
 * sum_dlistint - add nod at the end of the list
 * @head: pointer to the first nod of zee list
 * Return: the sum of all data
**/
int sum_dlistint(dlistint_t *head)
{
	int m = 0;
	dlistint_t *s;

	s = head;
	while (s)
	{
		m += s->n;
		s = s->next;
	}

	return (m);
}
