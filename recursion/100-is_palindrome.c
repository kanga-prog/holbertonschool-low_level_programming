#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string recursively.
 * @s: pointer to the string.
 *
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - Helper function to check if a string is a palindrome.
 * @s: string to check.
 * @start: starting index.
 * @end: ending index.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome, 0 otherwise.
 * @s: string to check.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length;

	if (*s == '\0')
		return (1);

	length = _strlen_recursion(s);
	return (check_palindrome(s, 0, length - 1));
}

