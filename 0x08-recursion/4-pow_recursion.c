#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - raise to the power
 * @x: the base
 * @y: the power
 * Return: x raise to power y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
