#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie deux nombres passés en argument
 * @argc: nombre d'arguments passés
 * @argv: tableau des arguments
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

	/* Vérifier si la conversion a échoué (atoi retourne 0 en cas d'échec) */
	if (num1 == 0 || num2 == 0)
	{
		printf("Error\n");
		return (1);
	}

	/* Effectuer la multiplication et afficher le résultat */
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
