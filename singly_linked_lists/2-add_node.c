#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);  /* Return NULL if memory allocation fails */
	}

	/* Duplicate the string and assign it to the new node */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);  /* Free the node if strdup fails */
		return (NULL);    /* Return NULL if strdup fails */
	}

	/* Set the length of the string */
	new_node->len = strlen(str);

	/* Insert the new node at the beginning of the list */
	new_node->next = *head;  /* Point the new node to the current head */
	*head = new_node;        /* Update the head to point to the new node */

	return (new_node);        /* Return the new node */
}

