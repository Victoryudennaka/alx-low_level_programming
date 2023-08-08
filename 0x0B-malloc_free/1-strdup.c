#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_strdup - copy the string
*@str: the string to copy
*
*Return: ptr copy of the string
*/
char *_strdup(char *str)
{
int count;
char *ptr;
int i = 0;

if (str == NULL)
{
return (NULL);
}
count = 0;
while (str[count] != '\0')
{
count++;
}

ptr = malloc((count + 1) * sizeof(char));
if (ptr == NULL)
{
return (NULL);
}
while (i < count)
{
ptr[i] = str[i];
i++;
}
ptr[count] = '\0';
return (ptr);
}
