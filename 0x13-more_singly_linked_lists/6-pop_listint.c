#include "lists.h"
/**
 * pop_listint - a function that frees the first node
 * @head: pointer to the first node
 * Return: content of the first node
*/
int pop_listint(listint_t **head)
{
	listint_t *p = *head;
	int s;

	if (*head == NULL || head == NULL)
		return (0);
	*head = p->next;
	s = p->n;
	free(p);
	return (s);
}
