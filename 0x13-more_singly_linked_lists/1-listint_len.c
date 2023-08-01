#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns number of elements
 * @p: pointer to the head of listint-t list.
 * Return: number of elements in listint_t list.
 */
size_t listint_len(const listint_t *p)
{
	size_t nodes = 0;

	while (p)
	{
		nodes++;
		p = p->next;
	}
	return (nodes);
}
