#include <stdio.h>

/**
 * _pow_recursion - Calcule la valeur de x élevé à la puissance y.
 * @x: La base.
 * @y: L'exposant.
 *
 * Return: La valeur de x^y, ou -1 si y est inférieur à 0.
 */
int _pow_recursion(int x, int y)
{
	/* Cas d'erreur : y est inférieur à 0 */
	if (y < 0)
	{
		return (-1);
	}

	/* Cas de base : x^0 est 1 */
	if (y == 0)
	{
		return (1);
	}

	/* Cas récursif : x * x^(y-1) */
	return (x * _pow_recursion(x, y - 1));
}
