#include "lists.h"

/**
 * free_listint_safe - free a listint_t linked list
 * @h: pointer to head
 * Return: size
*/
size_t free_listint_safe(listint_t **h)
{
	size_t counts = 0;
	listint_t *cur, *nxt;

	cur = *h;
        *h = NULL;

	while (cur != NULL)
	{
		nxt= cur->next;
		if(nxt <= cur)
		{
			free(cur);
			counts++;
		}
		else
		{
			break;
		}
		cur = nxt;
	}
        return (counts);
}
