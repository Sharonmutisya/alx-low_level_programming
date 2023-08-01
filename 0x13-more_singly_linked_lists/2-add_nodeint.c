#include "lists.h"

/**
 * add_nodeint - Adds new node at the beginning of listint_t list
 * @n: integer
 * @head: pointer to address of head of the listint_t list.
 * Return: if the function fails - NULL.
 *         otherwise - address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
