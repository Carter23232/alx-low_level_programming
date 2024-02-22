#include "lists.h"
/**
 * add_dnodeint - add node to the beginning of doubly linked list
 * @head: head of list
 * @n: data to add to list
 * Return: address or NUll
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_data;

	n_data = malloc(sizeof(dlistint_t));
	if (!n_data)
	{
		free(n_data);
		return (NULL);
	}
	n_data->n = n;
	n_data->prev = NULL;
	n_data->next = *head;
	(*head) = n_data;
	return (n_data);
}
