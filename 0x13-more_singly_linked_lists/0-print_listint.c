#include "lists.h"

/**
*print_listint - print and count the elements
*@h: the head/pointer to the first node
*
*Return: the size
*/
size_t print_listint(const listint_t *h)
{
size_t size = 0;

while (h != NULL)
{
printf("%d\n", h->n);
size++;
h = h->next;
}

return (size);
}
