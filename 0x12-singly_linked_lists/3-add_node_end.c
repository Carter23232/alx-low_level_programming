#include "lists.h"

/**
  * add_node_end - Adds a new node at the end of a list
  * @head: The original linked list
  * @str: The string to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last, *current;

	if (str != NULL)
	{
		last = malloc(sizeof(list_t));
		if (last != NULL)
		{
			last->str = strdup(str);
			last->len = strlen(str);
			last->next = NULL;
		}
	}
	else
		return (NULL);
	if (*head != NULL)
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = last;
	}
	else
	{
		*head = last;
		return (*head);
	}
	return (last);
}
