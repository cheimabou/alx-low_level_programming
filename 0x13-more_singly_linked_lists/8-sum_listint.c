#include "lists.h"
/**
 * sum_listint - a function that returns the sum of elements of a list
 * @head: a pointer to the list
 * Return: the result
*/
int sum_listint(listint_t *head)
{
	listint_t *p = head;
	int s = 0;

	if (p == NULL)
		return (0);
	while (p != NULL)
	{
		s += p->n;
		p = p->next;
	}
	return (s);
}
