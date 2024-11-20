#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - Affiche un caractère.
 * @args: Liste d'arguments.
 */
void print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}

/**
 * print_int - Affiche un entier.
 * @args: Liste d'arguments.
 */
void print_int(va_list args)
{
	int i = va_arg(args, int);

	printf("%d", i);
}

/**
 * print_float - Affiche un flottant.
 * @args: Liste d'arguments.
 */
void print_float(va_list args)
{
	float f = va_arg(args, double);

	printf("%f", f);
}

/**
 * print_string - Affiche une chaîne de caractères.
 * @args: Liste d'arguments.
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

/**
 * print_all - Affiche des données de différents types.
 * @format: Une chaîne qui décrit les types des arguments à afficher.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;

	void (*functions[])(va_list) = {
		print_char, print_int, print_float, print_string
	};

	char types[] = {'c', 'i', 'f', 's'};

	va_start(args, format);

	while (format && format[i])
	{
		unsigned int j = 0;

		while (types[j] != '\0')
		{
			if (format[i] == types[j])
			{
				functions[j](args);
				if (format[i + 1] != '\0')
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
