#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Affiche des chaînes de caractères,
 * suivies d'un nouveau ligne.
 * @separator: Le séparateur à afficher entre
 * les chaînes de caractères.
 * @n: Le nombre de chaînes de caractères à afficher.
 *
 * Description: Cette fonction accepte un nombre
 * variable de chaînes de caractères.
 * Elle affiche chaque chaîne avec un séparateur entre elles. Si chaîne est
 * NULL, "(nil)" est affiché à la place. La fonction termine par l'affichage
 * d'une nouvelle ligne.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	/* Initialiser va_list pour accéder aux arguments variables*/
	va_start(args, n);

	/* Parcourir chaque argument*/
	for (i = 0; i < n; i++)
	{
		/* Obtenir la chaîne de caractères actuelle*/
		str = va_arg(args, char *);

		if (i > 0 && separator != NULL)
			printf("%s", separator);

		/* Afficher la chaîne ou (nil) si la chaîne est NULL*/
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}

	/* Afficher une nouvelle ligne à la fin*/
	printf("\n");

	/* Nettoyer va_list*/
	va_end(args);
}
