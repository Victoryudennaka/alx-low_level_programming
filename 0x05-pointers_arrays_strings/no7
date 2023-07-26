#include "main.h"
#include <stdio.h>

/**
 * puts_half - the function
 * @str: the pointer
 */
void puts_half(char *str)
{
int length = 0;
int start_position;
char *ptr = str;
int i;

while (*ptr != '\0')
{
length++;
ptr++;
}

start_position = (length - 1) / 2;
if (length % 2 == 0)
{
start_position++;
}

i = start_position;
while (i < length)
{
printf("%c", str[i]);
i++;
}
printf("\n");
}
