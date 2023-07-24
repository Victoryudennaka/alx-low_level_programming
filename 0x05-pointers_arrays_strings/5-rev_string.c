#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse
 * @s: the parameter
 */
void rev_string(char *s)
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
