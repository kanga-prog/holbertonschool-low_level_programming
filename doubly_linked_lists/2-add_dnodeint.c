#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to the pointer to the head of the list.
 * @n: The integer to store in the new node.
 *
 * Return: The address of the new node, or NULL if it fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node) /* Memory allocation failed */
		return (NULL);

	/* Initialize the new node */
	new_node->n = n;
	new_node->prev = NULL; /* New node will be the first, so prev is NULL */
	new_node->next = *head; /* Next points to the current head */

	/* If the list is not empty, update the previous head's prev pointer */
	if (*head)
		(*head)->prev = new_node;

	/* Update the head to the new node */
	*head = new_node;

	return (new_node); /* Return the address of the new node */
}

