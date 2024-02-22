#include "lists.h"
dlistint_t *add_anypos(dlistint_t **head, unsigned int idx, const int n);
size_t dlen(const dlistint_t *h);
/**
 * insert_dnodeint_at_index - insert node at a given idx of doubly linked list
 * @h: head of list
 * @idx: index to insert
 * @n:number
 * Return: address of the new node, or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t len = dlen(*h);

	if (!*h || idx > len - 1)
		return (NULL);
	if (idx == 0 || len == 0)
		return (add_dnodeint(h, n));
	if (idx == len - 1)
		return (add_dnodeint_end(h, n));
	return (add_anypos(h, idx, n));
}
/**
 * add_anypos -  insert node at a given index of doubly linked list
 * @head: head of list
 * @idx: index to insert
 * @n:number
 * Return: address of the new node, or NULL
 */

dlistint_t *add_anypos(dlistint_t **head, unsigned int idx, const int n)
{
	dlistint_t *n_data, *cur = *head, *temp;
	unsigned int index = 0;

	if (!*head)
		return (NULL);

	n_data = malloc(sizeof(dlistint_t));
	if (!n_data)
		return (NULL);
	n_data->n = n;
	while (cur)
	{
		if (index == idx - 1)
		{
			temp = cur->next;
			cur->next = n_data;
			n_data->prev = cur;
			n_data->next = temp;
			temp->prev = n_data;

		}
		cur = cur->next;
		index++;
	}
	return (*head);
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
