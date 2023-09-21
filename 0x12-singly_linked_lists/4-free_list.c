#include "lists.h"
/**
 * free_list - a function that frees a list
 * @head: the first node
*/
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *p = head;

		head = head->next;
		free(p->str);
		free(p);
	}
}
