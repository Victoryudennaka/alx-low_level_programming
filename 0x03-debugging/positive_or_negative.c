#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - the function
 * @c: the parameter
 */
void positive_or_negative(int c)
{
	if (c > 0)
	{
		printf("%d is positive", c);
	}
	else if (c < 0)
	{
		printf("%d is negative", c);
	}
	else
	{
		printf("%d is zero", c);
	}
	printf("\n");
}
