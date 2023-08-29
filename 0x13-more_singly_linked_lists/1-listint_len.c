#include "lists.h"

/**
*listint_len - the number of a list
*@h: the head/a pointer to the first node
*Return: the number
*/
size_t listint_len(const listint_t *h)
{
size_t len = 0;

while (h != NULL)
{
len++;
h = h->next;
}

return (len);
}
