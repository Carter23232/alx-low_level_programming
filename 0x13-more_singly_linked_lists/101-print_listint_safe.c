#include "lists.h"

/**
  * print_listint_safe - prints a listint_t linked list
  * @head: pointer to head
  * Return: size
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t  i = 0, j = 0, visited_chk = 0;
	const listint_t *visited_nodes[1024];

	while (head != NULL)
	{
		if (!visited_chk)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			visited_nodes[i++] = head;
			head = head->next;
		}

		else
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}

		while (j < i)
		{
			if (visited_nodes[j] == head)
			{
				visited_chk = 1;
				break;
			}
			j++;
		}
	}
	return (i);
}
