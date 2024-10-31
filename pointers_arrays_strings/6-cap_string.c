#include <stdio.h>

/**
 * cap_string - Capitalizes all words in a string.
 * @str: Pointer to the string to be modified.
 *
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *str)
{
	int i = 0;
	char separators[] = " \t\n,;.!?\"(){}";
