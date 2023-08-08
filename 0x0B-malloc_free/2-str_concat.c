#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*str_concat - the function
*@s1: the string
*@s2: the string
*Return: ptr
*/
char *str_concat(char *s1, char *s2)
{
int i = 0;
int j = 0;
int k = 0;
int l = 0;
char *ptr;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
ptr = malloc(sizeof(char) * (i + j + 1));
if (ptr == NULL)
return (NULL);
while (s1[k] != '\0')
{
ptr[k] = s1[k];
k++;
}
while (s2[l] != '\0')
{
ptr[k] = s2[l];
k++;
i++;
}
ptr[k] = '\0';
return (ptr);
}
