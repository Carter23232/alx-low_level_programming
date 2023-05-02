#include "lists.h"

/**
  * find_listint_loop - prints a listint_t linked list
  * @head: pointer to head
  * Return: size
  */
listint_t *find_listint_loop(listint_t *head)
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
			printf("Loop starts at [%p] %d\n", (void *)head, head->n);
		        return (head);
		}

		j = 0;
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
	return (NULL);
}
