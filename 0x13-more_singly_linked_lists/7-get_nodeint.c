#include "lists.h"

/**
  * get_nodeint_at_index - eturns the nth node
  * @head: pionter to the first node
  * @index: index of node
  *
  * Return: ...
  */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cur;
	unsigned int i = 0;

	while (head != NULL)
	{
		cur = head;
		head = head->next;
		i++;
		if (i == index)
		{
			return (cur);
		}
	}
	return (NULL);
}
