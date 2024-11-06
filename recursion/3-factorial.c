#include <stdio.h>

/**
 * factorial - Calcule la factorielle d'un nombre entier.
 * @n: Le nombre dont on veut calculer la factorielle.
 *
 * Return: La factorielle de n, ou -1 en cas d'erreur (n < 0).
 */
int factorial(int n)
{
	/* Cas d'erreur : n est négatif */
	if (n < 0)
	{
		return (-1);
	}

	/* Cas de base : factorielle de 0 est 1 */
	if (n == 0)
	{
		return (1);
	}

	/* Cas récursif : n * factorielle de (n - 1) */
	return (n * factorial(n - 1));
}
