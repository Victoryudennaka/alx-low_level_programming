#include <stdio.h>
#include "main.h"

/**
*_memcpy - the function
*@src: the src code
*@dest: the desk codei
*@n: the counter
*Return: desk
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
