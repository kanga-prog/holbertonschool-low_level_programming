#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 * @head: A pointer to the head of the list.
 * @n: The integer value to insert into the new node.
 * 
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Allocate memory for the new node*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node*/
	new_node->n = n;
	new_node->prev = NULL;  /* Since it's the new head, no previous node*/
	new_node->next = *head; /* Point to the current head (could be NULL)*/

	if (*head != NULL)
		(*head)->prev = new_node;

	/* Update the head pointer to point to the new node*/
	*head = new_node;

	return (new_node);  /* Return the address of the new node*/
}
