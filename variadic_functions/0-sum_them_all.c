#include "variadic_functions.h"

/**
 * sum_them_all - Renvoie la somme de tous ses paramètres
 * @n: Le nombre d'arguments passés.
 *
 * Return: La somme des arguments, ou 0 si n est égal à 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int total = 0;

	/* Si n est 0, on retourne 0 */
	if (n == 0)
		return (0);

	/* Initialisation de la liste d'arguments */
	va_start(args, n);

	/* Additionner les arguments */
	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}

	/* Nettoyer après avoir utilisé la liste d'arguments */
	va_end(args);

	return (total);
}

