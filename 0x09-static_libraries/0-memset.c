#include <stdio.h>
#include "main.h"

/**
 *_memset - the function
 * @s: the string
 * @b: the char we fill
 * @n: the n byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
