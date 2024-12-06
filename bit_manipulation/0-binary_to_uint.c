#include <stddef.h>

/**
 * binary_to_uint - Convertit une chaîne binaire en un entier non signé.
 * @b: La chaîne binaire à convertir.
 *
 * Return: Le nombre entier correspondant en base 10, ou 0 si
 *         la chaîne est invalide ou NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	/* If the string is NULL, return 0*/
	if (b == NULL)
		return (0);

	/* Loop through the string*/
	for (i = 0; b[i] != '\0'; i++)
	{
		/* If the character is not '0' or '1', return 0*/
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = result * 2 + (b[i] - '0');
	}

	return (result);
}

