#include <stdio.h>
#include <stdlib.h>

/**
 * main - Programme qui calcule le nombre minimum 
 * de pièces pour rendre la monnaie
 * @argc: Le nombre d'arguments passés au programme
 * @argv: Tableau contenant les arguments passés au programme
 *
 * Retourn:
 * (0) en cas de succès (lorsque la monnaie est rendue avec succès)
 * (1) en cas d'erreur (si le nombre d'arguments est incorrect ou
 * si l'argument est invalide)
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	int i;

	/* Vérifier si le nombre d'arguments est correct */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Convertir l'argument en entier (cents) */
	cents = atoi(argv[1]);

	/* Si l'argument est un nombre négatif, afficher 0 */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	/* Algorithme glouton pour calculer le nombre minimum de pièces */
	for (i = 0; i < 5; i++)
	{
		/* Ajouter le nombre de pièces pour la dénomination actuelle */
		coins += cents / denominations[i];
		/* Mettre à jour cents avec le reste après utilisation des pièces */
		cents %= denominations[i];
	}

	/* Afficher le résultat */
	printf("%d\n", coins);

	return (0);  /* Retourner 0 pour indiquer le succès */
}
