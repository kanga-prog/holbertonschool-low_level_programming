#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Retourne un pointeur vers une nouvelle chaîne,copie de chaîne.
 *
 * @str: La chaîne à dupliquer.
 *
 * Return: Un pointeur vers la nouvelle chaîne, ou NULL en cas d'erreur.
 */
char *_strdup(char *str)
{
	unsigned int len;
	char *new_str;
	unsigned int i;

	/* Vérifier si la chaîne d'entrée est NULL*/
	if (str == NULL)
	{
		return (NULL);
	}

	/* Trouver la longueur de la chaîne*/
	len = strlen(str);  /*Utilisation de strlen pour simplifier*/

	new_str = (char *)malloc((len + 1) * sizeof(char));

	/* Vérifier si l'allocation de mémoire a échoué*/
	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}

	/*Ajouter le caractère NULL à la fin de la nouvelle chaîne*/
	new_str[len] = '\0';

	return (new_str);
}
