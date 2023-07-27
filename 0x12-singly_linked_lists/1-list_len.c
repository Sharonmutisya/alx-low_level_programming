#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @p: pointer to list_t list.
 * Return: number of elements in p.
 */
size_t list_len(const list_t *p)
{
	size_t i = 0;

	while (p)
	{
		i++;
		p = p->next;
	}
	return (i);
}
