#include "main.h"

/**
 *swap_int - swap two integers
 *@a: pointer
 *@b: pointers
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
