#include "main.h"

/**
*_strlen_recursion - lenght of a string
*@s: the string
*Return: lenght
*/
int _strlen_recursion(char *s)
{
int lenght;

lenght = 0;
while (s[lenght] != '\0')
{
lenght++;
lenght += _strlen_recursion(s + 1);
}
return (lenght);
}
