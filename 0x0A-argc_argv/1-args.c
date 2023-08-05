#include <stdio.h>
#include <stdlib.h>

/**
*main - the main function
*@argc: number of argument
*@argv: array of argument
*Return: 0
*/
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
