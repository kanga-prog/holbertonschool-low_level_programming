#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_space - Vérifie si un caractère est un espace
 * @c: Le caractère à vérifier
 *
 * Return: 1 si c est un espace, 0 sinon
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\r');
}

/**
 * count_words - Compte le nombre de mots dans la chaîne
 * @str: La chaîne à analyser
 *
 * Return: Le nombre de mots
 */
int count_words(char *str)
{
	int word_count = 0;
	size_t i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_space(str[i]) && (i == 0 || is_space(str[i - 1])))
			word_count++;
	}

	return (word_count);
}

/**
 * create_word - Crée un mot à partir d'une portion de la chaîne
 * @str: La chaîne de caractères
 * @start: L'indice de début du mot
 * @end: L'indice de fin du mot
 *
 * Return: Un mot alloué dynamiquement
 */
char *create_word(char *str, int start, int end)
{
	char *word;
	int length = end - start;

	word = malloc(length + 1);
	if (word == NULL)
		return (NULL);

	strncpy(word, &str[start], length);
	word[length] = '\0';

	return (word);
}

/**
 * strtow - Découpe une chaîne en mots
 * @str: La chaîne à découper
 *
 * Return: Un tableau de chaînes contenant les mots ou NULL en cas d'échec
 */
char **strtow(char *str)
{
	char **words;
	int word_count, word_index;
	size_t i, start;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	word_index = 0;
	start = 0;

	for (i = 0; i <= strlen(str); i++)
	{
		if (is_space(str[i]) || str[i] == '\0')
		{
			if (i > start)
			{
				words[word_index] = create_word(str, start, i);
				if (words[word_index] == NULL)
				{
					int j;
				for (j = 0; j < word_index; j++)
						free(words[j]);
					free(words);
					return (NULL);
				}
				word_index++;
			}
			start = i + 1;
		}
	}

	words[word_index] = NULL;
	return (words);
}

/**
 * free_words - Libère la mémoire allouée pour un tableau de mots
 * @words: Le tableau de mots à libérer
 */
void free_words(char **words)
{
	int i;

	if (words != NULL)
	{
		for (i = 0; words[i] != NULL; i++)
		{
			free(words[i]);
		}
		free(words);
	}
}
