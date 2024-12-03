#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - ajoute un nouveau nœud à la fin de la liste
 * @head: pointeur vers le pointeur du premier nœud de la liste
 * @str: chaîne de caractères à ajouter au nœud
 *
 * Return: l'adresse du nouveau nœud, ou NULL si l'échec
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	/* Allocation d'un nouveau nœud */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL); /* Si l'allocation échoue, on retourne NULL */

	/* Duplication de la chaîne */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);  /* Calcul de la longueur de la chaîne */
	new_node->next = NULL;

	/* Si la liste est vide, on place le nouveau nœud comme premier élément */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/* Sinon, on parcourt la liste jusqu'au dernier nœud */
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		/* On relie le dernier nœud au nouveau nœud */
		temp->next = new_node;
	}

	return (new_node); /* Retourne l'adresse du nouveau nœud */
}

