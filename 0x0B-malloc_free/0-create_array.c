#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*create_array - prints buffer in hexa
*@size: the size of the memory to print
*@c: the string
*Return: a pointer
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;

ptr = malloc(size * sizeof(char));
if (size == 0 || ptr == NULL)
{
	return (NULL);
}
i = 0;
while (i < size)
{
ptr[i] = c;
i++;
}
return (ptr);
}
