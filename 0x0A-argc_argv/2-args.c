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

i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
