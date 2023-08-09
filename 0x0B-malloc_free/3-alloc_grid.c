#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*alloc_grid - the pointer to arrays
*@width: the column
*@height: the row
*Return: the ptr to pointer
*/
int **alloc_grid(int width, int height)
{
int i;
int j;
int **ptr;

if (width <= 0 || height <= 0)
return (NULL);
ptr = calloc(height, sizeof(int *));
if (ptr == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
ptr[i] = calloc(width, sizeof(int));
if (ptr[i] == NULL)
{
for (; i >= 0; i--)
{
free(ptr[i]);
free(ptr);
}
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
ptr[i][j] = 0;
}
}
return (ptr);
}
