#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list.
 * @h: Pointer to the first node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	/* Traverse through the linked list*/
	while (h != NULL)
	{
		/* If the string in the node is NULL, print [0] (nil)*/
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			/* Otherwise, print the string and its length*/
			printf("[%lu] %s\n", h->len, h->str);

		/* Move to the next node*/
		h = h->next;
		count++;
	}

	return (count);
}

