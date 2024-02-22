#include "lists.h"
/**
 * print_dlistint - doubly linked list
 * @h: head of list
 * Return: 0 if none or len
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
