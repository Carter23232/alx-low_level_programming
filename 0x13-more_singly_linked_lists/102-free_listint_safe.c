#include "lists.h"

/**
 * free_listint_safe - free a listint_t linked list
 * @h: pointer to head
 * Return: size
*/
size_t free_listint_safe(listint_t **h)
{
    size_t i = 0, j = 0, visited_chk = 0;
    listint_t **visited_nodes = malloc(sizeof(listint_t *) * 1024);
    listint_t *ptr;

    while (*h != NULL)
    {
        if (!visited_chk)
        {
            visited_nodes[i++] = *h;
            ptr = *h;
            *h = (*h)->next;
            free(ptr);
        }
        else
        {
            free(*h);
            *h = NULL;
            break;
        }

        j = 0;
        while (j < i)
        {
            if (visited_nodes[j] == *h)
            {
                visited_chk = 1;
            }
            j++;
        }
    }
    free(*h);
    *h = NULL;
    free(visited_nodes);
    return (i);
}
