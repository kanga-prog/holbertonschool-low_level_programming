#include "lists.h"
#include <stdlib.h>  /* for free */

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the list.
 *
 * This function frees each node of the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	/* Traverse the list and free each node */
	while (head)
	{
		temp = head;        /* Store the current node */
		head = head->next;  /* Move to the next node */
		free(temp);         /* Free the memory of the current node */
	}
}

