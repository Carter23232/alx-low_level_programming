#include "lists.h"
/**
 * add_dnodeint_end - add node to the end of doubly linked list
 * @head: head of list
 * @n: data to add to list
 * Return: address or NUll
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_data, *last = *head;

	n_data = malloc(sizeof(dlistint_t));
	if (!n_data)
		return (NULL);
	n_data->next = NULL;
	n_data->n = n;
	if (!*head)
	{
		n_data->prev = NULL;
		*head = n_data;
		return (*head);
	}
	else
	{
		while (last->next)
			last = last->next;
		last->next = n_data;
		n_data->prev = *head;
	}
	return (n_data);
}
