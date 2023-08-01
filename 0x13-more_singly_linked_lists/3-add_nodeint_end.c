#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of listint_t list.
 * @n: integer
 * @head: pointer to the address of head of listint_t list.
 * Return: If the function fails - NULL.
 *         otherwise - address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
