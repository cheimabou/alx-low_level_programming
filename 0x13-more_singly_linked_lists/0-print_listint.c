#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a list
 * @h: a pointer to the list
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}
	return (s);
}
