#include "lists.h"
/**
 * dlistint_len - doubly linked list len
 * @h: head of list
 * Return: 0 if none or len
 */
size_t dlistint_len(const dlistint_t *h)
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
