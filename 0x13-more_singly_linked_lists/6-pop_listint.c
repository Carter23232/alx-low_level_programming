#include "lists.h"

/**
  * pop_listint -  deletes the head node
  * @head: head of list
  *
  * Return: int data
  */

int pop_listint(listint_t **head)
{
	int n;

	if (head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	free(*head);
	return (n);
}
