#include "lists.h"

/**
 * find_listint_loop - finds the loop.
 * @head: linked list to search for.
 * Return: Address where the loop starts, or NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *steady = head;
	listint_t *speedy = head;

	if (!head)
		return (NULL);

	while (steady && speedy && speedy->next)
	{
		speedy = speedy->next->next;
		steady = steady->next;
		if (speedy == steady)
		{
			steady = head;
			while (steady != speedy)
			{
				steady = steady->next;
				speedy = speedy->next;
			}
			return (speedy);
		}
	}
	return (NULL);
}
