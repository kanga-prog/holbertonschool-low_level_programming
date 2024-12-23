#include "lists.h"

/**
 * list_len - Returns the number of elements in a list_t list.
 * @h: Pointer to the first node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	/* Traverse through the linked list */
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

