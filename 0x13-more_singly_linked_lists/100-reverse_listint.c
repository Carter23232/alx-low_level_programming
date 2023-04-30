#include "lists.h"

/**
  * reverse_listint - everses a listint_t linked list
  * @head: pointer to head
  * Return: address to modified list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur, *nxt;

	while (*head != NULL)
	{
		nxt = (*head)->next;
	        (*head)->next = cur;
		cur = *head;
		*head = nxt;
	}
	*head = cur;
	return(*head);
}
