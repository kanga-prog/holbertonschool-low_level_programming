#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Crée un tableau de caractères initialisé.
 * @size: La taille du tableau.
 * @c: Le caractère à utiliser pour initialiser le tableau.
 *
 * Return: Un pointeur vers le tableau créé, ou NULL en cas d'échec.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
