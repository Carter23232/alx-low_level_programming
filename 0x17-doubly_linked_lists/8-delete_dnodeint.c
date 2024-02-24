#include "lists.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
size_t dlen(const dlistint_t *h);
/**
* delete_dnodeint_at_index - delete node in doubly linked list
* @head: pointer to the head
* @index: nth element to del
* Return: 1 if successful or -1 otherwise
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur = *head, *temp;
	unsigned int counter = 0;
	size_t len = dlen(*head);

	if (index > len - 1 || !(*head))
		return (-1);
	while (cur)
	{
		if (index == 0)
		{
			*head = cur->next;
			if (*head)
				(*head)->prev = NULL;
			free(cur);
			break;
		}
		else if (index == len - 1)
		{
			cur->prev->next = NULL;
			free(cur);
			break;

		}
		else if (counter == index - 1)
		{
			temp = cur->next;
			cur->next = temp->next;
			if (temp->next)
				temp->next->prev = cur;
			free(temp);
			break;
		}
		cur = cur->next;
		counter++;
	}
	return (1);
}
/**
 * dlen - doubly linked list len
 * @h: head of list
 * Return: 0 if none or len
 */
size_t dlen(const dlistint_t *h)
{
	size_t len = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
