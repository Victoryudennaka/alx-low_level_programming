#include "main.h"

/**
 * _strlen - the parameter
 *@s: the parameter
 *Return: the lenght
 */
int _strlen(char *s)
{
	int lenght;

	lenght = 0;
	while (s[lenght] != '\0')
	{
		lenght++;
	}
		return (lenght);
}
