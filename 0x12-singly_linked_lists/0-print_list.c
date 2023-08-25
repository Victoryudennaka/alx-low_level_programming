#include <stdio.h>
#include "lists.h"

/**
*print_list - return the number of the element
*@h: a constant pointer to the first element/head
*Return: the size of the list
*/
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
count++;
}
return (count);
}
