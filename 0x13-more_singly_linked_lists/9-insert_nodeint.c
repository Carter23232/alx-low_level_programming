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
	listint_t *cur;
	unsigned int i = 0;

	while (*head != NULL || head != NULL)
	{
		cur = *head;
		if (i == idx)
		{
			cur->n = n;
			return (cur);
		}
		*head = (*head)->next;
		i++;
	}
	return (NULL);
}