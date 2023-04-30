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
	listint_t *cur, *nxt;
	unsigned int i = 0;

	if (head != NULL)
	{
		cur = malloc(sizeof(listint_t));
		if (cur == NULL)
			return (NULL);
		cur->n = n;
		while (*head != NULL)
		{
			if (i == idx)
			{
				nxt = (*head)->next;
				(*head)->next = cur;
				cur->next = nxt;
				return (cur);
			}
			*head = (*head)->next;
			i++;
		}
	}
	return (NULL);
}
