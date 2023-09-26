#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at the end of a list
 * @head: pointer to the list
 * @n: the content of the new node
 * Return: @ of the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listnt_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
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
