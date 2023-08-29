#include "lists.h"

/**
*add_nodeint - the new node in the beginning
*@head: the pointer to the new/first node
*@n: the number
*Return: the address to the newnode
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *front_node;

front_node = malloc(sizeof(listint_t));
if (front_node == NULL)
return (NULL);

front_node->n = n;
front_node->next = (*head);
(*head) = front_node;

return (*head);
}
