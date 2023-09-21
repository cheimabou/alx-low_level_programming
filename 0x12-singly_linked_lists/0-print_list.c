#include "lists.h"
/**
 * print_list - function that prints all the elements of a list
 * @h: pointer to the list
 * Return: number of elements
*/
size_t print_list(const list_t *h)
{
	const list_t *p = h;
	size_t s = 0;

	while (p)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", p->len, p->str);
		p = p->next;
		s++;
	}
	return (s);
}
