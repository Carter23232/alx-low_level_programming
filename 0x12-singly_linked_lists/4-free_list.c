#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: The pointer to the first node of linked list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *current;
	current = head;
	while (head != NULL)
	{
		current = current->next;
		free(current->str);
		free(current);
	}
}
