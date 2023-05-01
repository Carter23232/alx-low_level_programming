#include "lists.h"

/**
 * free_listint_safe - free a listint_t linked list
 * @h: pointer to head
 * Return: size
*/
size_t free_listint_safe(listint_t **h)
{
    size_t i = 0;
    const size_t max_nodes = 1024;
    const listint_t *visited_nodes[max_nodes];
    listint_t *current, *tmp;

    while (*h != NULL)
    {
        current = *h;
        *h = (*h)->next;

        for (size_t j = 0; j < i && j < max_nodes; j++)
        {
            if (visited_nodes[j] == current)
            {
                free(current);
                current = NULL;
                break;
            }
        }

        if (current != NULL)
        {
            visited_nodes[i++] = current;
            free(current);
        }
    }

    *h = NULL;

    return i;
}
