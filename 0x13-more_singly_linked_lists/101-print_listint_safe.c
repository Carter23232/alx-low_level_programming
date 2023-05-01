#include "lists.h"

/**
  * print_listint_safe - prints a listint_t linked list
  * @head: pointer to head
  * Return: size
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t  i = 0, bool = head > head->next ? 1 : 0;

	while (head != NULL)
	{
		if (bool)
		{
			if(head <= head->next)
			{
				break;
			}
			printf("[%p] %d\n", head, head->n);
			i++;
		}
		else
		{
			if(head >= head->next)
			{
				break;
			}
			printf("[%p] %d\n", head, head->n);
		}
		head = head->next;
	}
	return (i);

}
