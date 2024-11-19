#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to be printed.
 * @f: A pointer to the function that will print the name.
 *
 * Description:
 * This function takes a string `name` and a function pointer `f`. It checks
 * if both parameters are valid (not NULL) and then calls the function `f`
 * with `name` as an argument.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	{
		(*f)(name);
	}
}
