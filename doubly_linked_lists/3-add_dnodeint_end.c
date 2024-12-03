#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the pointer to the head of the list.
 * @n: The integer to store in the new node.
 *
 * Return: The address of the new node, or NULL if it fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node) /* Memory allocation failed */
		return (NULL);

	/* Initialize the new node */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	/* If the list is empty, the new node becomes the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse to the last node */
	temp = *head;
	while (temp->next)
		temp = temp->next;

	/* Update the last node's next pointer to the new node */
	temp->next = new_node;
	new_node->prev = temp;

	return (new_node); /* Return the address of the new node */
}

