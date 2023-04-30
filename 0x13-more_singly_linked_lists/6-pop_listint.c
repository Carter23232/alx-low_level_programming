#include "lists.h"

/**
  * pop_listint -  deletes the head node
  * @head: head of list
  * Return: int data
  */

int pop_listint(listint_t **head)
{
	listint_t *cur;
	int n;

	if (head == NULL)
	{
		return (0);
	}
	cur = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(cur);
	return (n);
}
