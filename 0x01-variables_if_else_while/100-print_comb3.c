#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int n;
int m;

for (n = 0; n < 10; n++)
{
for (m = 1; m < 10; m++)
{
if (m > n)
{
putchar(n + '0');
putchar(m + '0');
if (n != 8 || m != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
