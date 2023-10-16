#include "main.h"

/**
 *_islower - the function
 *@c: the argument
 *Return: 1 if true and 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
