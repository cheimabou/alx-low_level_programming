#include "lists.h"
/***/
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
