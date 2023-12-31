#include "lists.h"
/**
 * add_node_end - a function that adds a new node at the end of a list
 * @head: head of the list
 * @str: string of the new element
 * Return: a pointer to the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	size_t s;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	s = 0;
	while (str[s] != '\0')
	{
		s++;
	}
	new->len = s;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		list_t *p = *head;

		while (p->next != NULL)
			p = p->next;
		p->next = new;
	}
	return (new);
}
