#include "main.h"
#include <stdio.h>

/**
 * print_rev - reverse
 * @s: the parameter
 */
void print_rev(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	count--;
	while (count >= 0)
	{
		printf("%c", s[count]);
		count--;
	}
	printf("\n");
}
