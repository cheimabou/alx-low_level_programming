#include "lists.h"
/**
 * free_listint - a function that frees a list
 * @head: pointer to the first element
*/
void free_listint(listint_t *head)
{
while (head != NULL)
{
void *p = head;

head = head->next;
free(p);
}
}
