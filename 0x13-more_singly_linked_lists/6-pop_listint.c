#include "lists.h"

/**
*pop_listint - remove the first node
*@head: the pointer to the first node
*Return: the integer
*/
int pop_listint(listint_t **head)
{
int n;
listint_t *temp;

if (!head || !*head)
return (0);

n = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (n);
}
