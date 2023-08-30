#include "lists.h"

/**
*sum_listint - the sum of the list
*@head: the pointer to the first node
*Return: the sum of the integers
*/
int sum_listint(listint_t *head)
{
int n = 0;

if (head == NULL)
return (0);

while (head != NULL)
{
n += head->n;
head = head->next;
}
return (n);
}
