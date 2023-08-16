#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - print the name
 *@name: the name
 *@f: the function pointer
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
