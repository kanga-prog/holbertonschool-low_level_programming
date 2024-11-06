#include <stdio.h>

/**
 * _strlen_recursion - Calcule la longueur d'une chaîne de caractères.
 * @s: La chaîne dont on veut calculer la longueur.
 *
 * Return: La longueur de la chaîne.
 */
int _strlen_recursion(char *s)
{
	/* Cas de base : si la chaîne est vide (fin de la chaîne atteinte) */
	if (*s == '\0')
	{
		return (0);  /* La longueur d'une chaîne vide est 0 */
	}

	return (1 + _strlen_recursion(s + 1));
}
