#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search in.
 * @accept: The string containing the accepted characters.
 *
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0; /* Initialize count of matching bytes*/
	char *p;

	while (*s) /* Loop through each character in s*/
	{
		p = accept; /* Pointer to check against accept*/
		while (*p) /* Loop through each character in accept*/
		{
			if (*s == *p) /* If the character matches*/
			{
				count++; /* Increment count*/
				break; /* Exit the inner loop*/
			}
			p++; /* Move to the next character in accept*/
		}
		if (!*p) /* If no match was found in accept*/
		{
			break; /* Exit the outer loop*/
		}
		s++; /* Move to the next character in s*/
	}

	return (count); /*Return the count of matching bytes*/
}
