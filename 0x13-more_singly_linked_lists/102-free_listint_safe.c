#include "lists.h"

/**
 * free_listint_safe - free a listint_t linked list
 * @h: pointer to head
 * Return: size
*/
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	*h = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		count++;
		if (next >= current)
		{
			break;
		}
		current = next;
	}
	return (count);
}
