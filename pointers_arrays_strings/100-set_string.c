#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The pointer to a pointer to a char.
 * @to: The string to set the pointer to.
 *
 * Description: This function changes the value of the pointer *s to point to
 * the address of the string *to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
