#include "lists.h"
/**
 * free_listint - a function that frees a list
 * @head: pointer to the first element
*/
void free_listint(listint_t *head)
{
while (head != NULL)
{
listint_t *p = head;

head = head->n;
free(p->n);
free(p);
}
}
