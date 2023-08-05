#include <stdio.h>
#include <stdlib.h>

/**
*main - the main function
*@argc: number of argument
*@argv: array of argument
*Return: 0;
*/
int main(int argc, char *argv[])
{
int i;
int mult = 1;

if (argc > 1)
{
i = 1;
while (i < argc)
{
mult *= atoi(argv[i]);
i++;
}
printf("%d\n", mult);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
