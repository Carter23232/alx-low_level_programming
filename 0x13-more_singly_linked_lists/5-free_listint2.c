#include "lists.h"

/**
  * free_listint2 - ...
  * @head: ...
  *
  * Return: ...
  */
void free_listint2(listint_t **head)
{
	listint_t *cur;

	while (*head != NULL)
	{
		cur = (*head);
		*head = (*head)->next;
		free(cur);
	}
	free(*head);
	head = NULL;
}
