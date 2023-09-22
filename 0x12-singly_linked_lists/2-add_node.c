#include "lists.h"
/**
 * add_node - a function that adds a new node at the beginning of a list
 * @head: the first element
 * @str: string of the new element
 * Return: pointer to the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t s;

	s = 0;
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
while (str[s] != '\0')
{
s++;
}
new->len = s;
new->next = *head;
*head = new;
return (new);
}
