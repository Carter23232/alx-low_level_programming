#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node of doubly linked list
 * @head: head of list
 * @index: node to retrieve
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int counter = 0;

	while (head)
	{
		if (index == counter)
			return (head);
		counter++;
		head = head->next;
	}
	return (NULL);
}
