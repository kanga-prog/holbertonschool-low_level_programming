#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 *
 * @s: La chaîne dont on veut connaître la longueur.
 *
 * Return: La longueur de la chaîne.
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * str_concat - Concatène deux chaînes de caractères.
 *
 * @s1: La première chaîne.
 * @s2: La deuxième chaîne.
 *
 * Return: Un pointeur vers la nouvelle chaîne concaténée.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2;
	char *result;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		result[i + j] = s2[j];
	}

	result[i + j] = '\0';

	return (result);
}
