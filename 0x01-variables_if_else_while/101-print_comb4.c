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
int o;

for (n = 0; n < 8; n++)
{
for (m = 1; m < 9; m++)
{
for (o = 2; o < 10; o++)
{
if (o > m && o > n && m > n)
{
putchar(n + '0');
putchar(m + '0');
putchar(o + '0');
if (n != 7 || m != 8 || o != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
