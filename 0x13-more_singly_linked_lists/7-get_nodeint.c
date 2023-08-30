#include "lists.h"

/**
*get_nodeint_at_index - return the nth node
*@head: the pointer to the first node
*@index: the nth integer
*Return: a pointer to the nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *nth;
unsigned int i = 0;

if (head == NULL)
return (NULL);

while (i < index)
{
if (head != NULL)
head = head->next;
i++;
}
nth = head;
return (nth);
}
