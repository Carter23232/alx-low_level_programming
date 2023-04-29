#include "lists.h"
/**
  * add_node - Adds a new node at the beginning of a list
  * @head: A pointer to the original linked list
  * @str: The string to add to the new node
  *
  * Return: A pointer to the new node, or NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *first;

	if (head != NULL && str != NULL)
	{
		first = malloc(sizeof(list_t));
		if (first != NULL)
		{
			first->str = strdup(str);
			first->len = strlen(str);
			first->next = *head;
			*head = first;
		}

	}
	else
		return (NULL);
	return (first);
}
