#include "lists.h"
#include <stdlib.h>

/**
 * free_list - libère toute la mémoire utilisée par la liste
 * @head: tête de la liste
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;          /* Sauvegarde le nœud actuel */
		head = head->next;    /* Déplace la tête vers le nœud suivant */
		free(temp->str);      /* Libère la chaîne de caractères */
		free(temp);           /* Libère le nœud */
	}
}

