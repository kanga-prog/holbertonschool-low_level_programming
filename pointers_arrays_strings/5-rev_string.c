#include <unistd.h>
#include <stdio.h>

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string to be reversed.
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	char *start = s;  /* Pointer to the start of the string */
	char *end = s;    /* Pointer to the end of the string */
	char temp;        /* Temporary variable for swapping */

	/* Move to the end of the string */
	while (*end != '\0')
	{
		end++;
	}
	end--;  /* Set end to the last character */

	/* Swap characters from start and end until they meet in the middle */
	while (start < end)
	{
		temp = *start;   /* Store the start character */
		*start = *end;   /* Replace start with end character */
		*end = temp;     /* Replace end with stored start character */
		start++;         /* Move start forward */
		end--;           /* Move end backward */
	}
}
