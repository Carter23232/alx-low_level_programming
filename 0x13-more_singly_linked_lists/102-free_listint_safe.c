#include "lists.h"

/**
 * free_listint_safe - free a listint_t linked list
 * @h: pointer to head
 * Return: size
 */
size_t free_listint_safe(listint_t **h)
{
	size_t  i = 0, j = 0, visited_chk = 0;
	const listint_t *visited_nodes[1024];
	listint_t *ptr;

	while (*h != NULL)
	{
		if (!visited_chk)
		{
			visited_nodes[i++] = *h;
			ptr = *h;
			*h = (*h)->next;
			free(ptr);
		}

		else
		{
			break;
		}

		j = 0;
		while (j < i)
		{
			if (visited_nodes[j] == *h)
			{
				visited_chk = 1;
				break;
			}
			j++;
		}
	}
	free(*h);
	*h = NULL;
	return (i);
}
