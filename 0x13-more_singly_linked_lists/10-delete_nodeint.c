#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index index
  * @head: pointer to head
  * @index: index to delete
  * Return: 1 on sucess and -1 otherwise
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur, *nxt;
	unsigned int i = 0;

	if (head != NULL)
	{
		if (index == 0)
		{
			nxt = *head;
			*head = (*head)->next;
			free(nxt);
			return (1);
		}

		nxt = *head;
		while (nxt != NULL)
		{
			if (i == index - 1)
			{
				cur = nxt->next;
				free(cur);
				cur = NULL;
				return (1);
			}
			nxt = nxt->next;
			i++;
		}
	}
	return (-1);
}
