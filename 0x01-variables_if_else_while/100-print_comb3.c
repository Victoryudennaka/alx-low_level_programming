#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char n;
char m;

for (n = 48; n < 58; n++)
{
for (m = 49; m < 58; m++)
{
if (m > n)
{
putchar(n);
putchar(m);
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

