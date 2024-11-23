#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Fonction pour vérifier si une chaîne est composée uniquement de chiffres */
int is_digit_string(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return 0;  /* Retourne 0 si un caractère numerique*/
		str++;
	}
	return 1;  /* Retourne 1 si tous les caractères sont des chiffres */
}

/* Fonction pour multiplier deux nombres */
int multiply(char *num1, char *num2)
{
	return atoi(num1) * atoi(num2);
}

int main(int argc, char *argv[])
{
	/* Vérification du nombre correct d'arguments */
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	/* Vérification que les deux arguments sont des nombres valides */
	if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	/* Multiplie les deux nombres et affiche le résultat */
	printf("%d\n", multiply(argv[1], argv[2]));

	return 0;
}

