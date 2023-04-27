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
	list_t *new_node;

	if (head != NULL && str != NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);

		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = *head;

		*head = new_node;

		return (new_node);
	}

	return (NULL);
}

/**
  * _strlen - Returns the length of a string
  * @str: The string to count
  *
  * Return: The length of the string
  */
int _strlen(const char *str)
{
	int len = 0;

	while (*str)
	{
		str++;
		len++;
	}

	return (len);
}
