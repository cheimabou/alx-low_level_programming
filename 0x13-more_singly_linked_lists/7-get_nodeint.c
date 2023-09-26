#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node
 * @head: pointer to the list
 * @index: index of the node
 * Return: a pointer to the node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (i < index && p != NULL)
	{
		i++;
		p = p->next;
	}
	if (i == index && p != NULL)
		return (p);
	else
		return (NULL);
}
