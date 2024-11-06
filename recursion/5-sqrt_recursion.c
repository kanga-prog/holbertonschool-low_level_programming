#include <stdio.h>

/**
 * _sqrt_helper - Fonction récursive pour trouver la racine carrée
 *                naturelle de n en testant les valeurs successives
 *                à partir de 1.
 * @n: Le nombre dont on veut trouver la racine carrée.
 * @guess: La valeur actuelle testée comme racine carrée.
 *
 * Return: La racine carrée de n si elle existe, sinon -1.
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Fonction principale pour calculer la racine carrée
 *                   naturelle de n en utilisant la récursion.
 * @n: Le nombre dont on veut trouver la racine carrée.
 *
 * Return: La racine carrée de n si elle existe, sinon -1.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_sqrt_helper(n, 1));
}
