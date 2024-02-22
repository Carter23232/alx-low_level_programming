#include "lists.h"
/**
 * free_dlistint - free doubly linked list
 * @head: head of list
 */
void free_dlistint (dlistint_t *head)
{
	dlistint_t *cur;

	while (head)
	{
		cur = head;
		head = head->next;
		free(cur);
	}
}
