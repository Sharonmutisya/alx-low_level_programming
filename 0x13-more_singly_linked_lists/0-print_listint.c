#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of listint_t list.
 * @p: pointer to the head of the list_t list.
 * Return: number of nodesin list_t list.
 */
size_t print_listint(const listint_t *p)
{
	size_t nodes = 0;

	while (p)
	{
		nodes++;
		printf("%d\n", p->n);
		p = p->next;
	}
	return (nodes);
}
