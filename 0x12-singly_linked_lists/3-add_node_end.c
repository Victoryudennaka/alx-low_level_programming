#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *end;
list_t *temp = (*head);
unsigned int len;

len = 0;
while (str[len] != '\0')
{
len++;
}

end = malloc(sizeof(list_t));
if (end == NULL)
return (NULL);

end->str = strdup(str);
end->len = len;
end->next = NULL;

if (*head == NULL)
{
*head = end;
return (end);
}

while (temp->next != NULL)
temp = temp->next;
temp->next = end;
return (end);
}
