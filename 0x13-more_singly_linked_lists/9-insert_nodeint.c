#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: pointer to head
  * @idx: index to insert
  * @n: value to insert
  *
  * Return: ...
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *nxt;
	unsigned int i = 0;

	if (head != NULL)
	{
		new = malloc(sizeof(listint_t));
		nxt = *head;
		if (new == NULL)
			return (NULL);
		new->n = n;
		while (nxt != NULL)
		{
			if (i == idx-1)
			{
				new->next = nxt->next;
				nxt->next = new;
			        return (new);
			}
			nxt = nxt->next;
			i++;
		}
	}
	return (NULL);
}
