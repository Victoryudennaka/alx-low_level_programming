#include "lists.h"

/**
*pop_listint - delete and return the head node
*@head: the pointer to the first node
*Return: the integer
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

if (head == NULL)
return (0);

n = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (n);
}
