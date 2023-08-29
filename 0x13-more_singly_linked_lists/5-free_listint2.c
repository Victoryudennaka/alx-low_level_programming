#include "lists.h"

/**
*free_listint2 - free the list
*@head: the head
*/
void free_listint2(listint_t **head)
{
listint_t *temp;

*head = NULL;

if (*head == NULL)
return;

while (*head != NULL)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
}
