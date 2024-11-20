#include "3-calc.h"
#include <stddef.h>  /* Include for NULL */

/**
 * get_op_func - Selects the correct function to perform the operation.
 * @s: The operator passed as a string.
 *
 * Return: The corresponding function pointer for the operator,
 * or NULL if invalid.
 */
int (*get_op_func(char *s))(int, int)
{
	if (*s == '+')
		return (op_add);
	if (*s == '-')
		return (op_sub);
	if (*s == '*')
		return (op_mul);
	if (*s == '/')
		return (op_div);
	if (*s == '%')
		return (op_mod);
	return (NULL);
}

