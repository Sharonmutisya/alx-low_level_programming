#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of linked list
 * @p: Pointer to lists_t list to print
 * Return: number of nodes printed
 */
size_t print_list(const list_t *p)
{
	size_t s = 0;

	while (p)
	{
		if (!p->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", p->len, p->str);
		p = p->next;
		s++;
	}
	return (s);
}
