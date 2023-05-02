#include "lists.h"

/**
  * find_listint_loop - prints a listint_t linked list
  * @head: pointer to head
  * Return: size
  */
listint_t *find_listint_loop(listint_t *head)
{
	while (head != NULL)
	{
		if (head->next == head->next->next)
		{
			return (head->next);
		}
		head = head->next;
	}
	return (NULL);
}
