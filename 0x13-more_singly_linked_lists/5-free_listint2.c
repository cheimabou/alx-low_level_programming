#include "lists.h"
/**
 * free_listint2 - a function that frees a list
 * @head: a pinter to the first node of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *p = *head;
	listint_t *next;

	while (p != NULL)
	{
		next = p->next;
		free(p);
		p = next;
	}
	*head = NULL;
}
