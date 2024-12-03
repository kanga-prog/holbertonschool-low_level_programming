#include "lists.h"
#include <stdlib.h>  /* For NULL */

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node to return (starting from 0).
 *
 * Return: The address of the node at the given index,
 *  or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	/* Traverse the list */
	while (head)
	{
		if (counter == index)
			return (head);

		head = head->next;    /* Move to the next node */
		counter++;            /* Increment the counter */
	}

	return (NULL);  /* Return NULL if the index is out of range */
}

