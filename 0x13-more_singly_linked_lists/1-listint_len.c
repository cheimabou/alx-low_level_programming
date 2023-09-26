#include "lists.h"
/**
 * listint_len - a function that returns the length of a list
 * @h: pointer to the list
 * Return: the result
*/
size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		s++;
		h = h->next;
	}
	return (s);
}
