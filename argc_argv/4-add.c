#include <stdio.h>
#include <stdlib.h> /* Pour utiliser atoi */
#include <ctype.h>  /* Pour vérifier si un caractère est un chiffre */

/**
 * is_digit_string - Vérifie si une chaîne contient uniquement des chiffres.
 * @str: La chaîne à vérifier.
 *
 * Return: 1 si la chaîne est un nombre valide, sinon 0.
 */
int is_digit_string(char *str)
{
	int i = 0;

	/* Si la chaîne est vide, ce n'est pas un nombre valide */
	if (str[i] == '\0')
		return (0);

	/* Vérifier chaque caractère pour s'assurer qu'il est un chiffre */
	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))  /* Si un caractère n'est pas un chiffre */
			return (0);
		i++;
	}

	return (1);
}

/**
 * main - Additionne des nombres passés en arguments.
 * @argc: Nombre d'arguments passés.
 * @argv: Tableau des arguments.
 *
 * Return: 0 si succès, 1 en cas d'erreur.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	/* Vérifier si des arguments ont été passés */
	if (argc == 1)
	{
		printf("0\n");
		return (0);  /* Aucun argument passé, afficher 0 et retourner 0 */
	}

	/* Additionner les nombres */
	for (i = 1; i < argc; i++)
	{
		/* Vérifier si l'argument est un nombre valide */
		if (!is_digit_string(argv[i]))
		{
			printf("Error\n");
			return (1);  /* Si un argument n'est pas un nombre valide, afficher Error */
		}

		/* Convertir l'argument en entier et l'ajouter à la somme */
		sum += atoi(argv[i]);
	}

	/* Afficher le résultat */
	printf("%d\n", sum);

	return (0);  /* Retourner 0 en cas de succès */
}
