#include <stdio.h>
#include <stdlib.h> /* Pour utiliser atoi */

/**
 * main - Multiplie deux nombres passés en argument
 * @argc: Nombre d'arguments passés
 * @argv: Tableau des arguments
 *
 * Return: 0 si succès, 1 en cas d'erreur
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* Vérifier si le nombre d'arguments est correct */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convertir les arguments en entiers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Effectuer la multiplication */
	result = num1 * num2;

	/* Afficher le résultat */
	printf("%d\n", result);

	return (0);
}
