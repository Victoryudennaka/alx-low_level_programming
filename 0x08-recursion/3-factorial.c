#include "main.h"

/**
 * factorial - the factorial of a number
 * @n: the number
 * Return: n * factoria(n - 1)
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
