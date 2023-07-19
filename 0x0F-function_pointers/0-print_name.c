#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name using a pointer to a function
 * @name: string to add
 * @p: pointer to function
 * return: nothing
 */
void print_name(char *name, void(*p)(char *))
{
	if (name == NULL || p == NULL)
		return;
	p(name);
}
