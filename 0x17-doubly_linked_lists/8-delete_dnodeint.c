#include "lists.h"
size_t dlen(const dlistint_t *h);
/**
* delete_dnodeint_at_index - delete node in doubly linked list
* @head: pointer to the head
* @index: nth element to del
* Return: 1 if successful or -1 otherwise
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur = *head;
	unsigned int counter = 0;
	size_t len = dlen(*head);

	if (index > len - 1 || !(*head))
		return (-1);
	while (cur)
	{
		if (index == 0)
		{
			*head = cur->next;
			free(cur);
			break;
		}
		if (index == len - 1)
		{
			cur->prev->next = NULL;
			free(cur);
			break;

		}
		if (counter == index - 1)
		{
			free(cur->next);
			cur->next = cur->next->next;
			cur->next->next->prev = cur;
			break;
		}
		cur = cur->next;
		counter++;
	}
	return (1);
}
