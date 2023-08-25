#include <stdio.h>
#include "lists.h"

/**
*list_len - the lenght of the list
*@h: the head/ ponter to the 1st list
*Return: the lenght
*/

size_t list_len(const list_t *h)
{
size_t count;

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
