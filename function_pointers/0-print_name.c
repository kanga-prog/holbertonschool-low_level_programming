#include <stdio.h>

/**
 * print_name - prints a name using a function pointer
 * @name: the name to be printed
 * @f: a function pointer that takes a char * and returns void
 *
 * Description: This function calls the function pointed to by `f` to print
 *		the name provided as `name`.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)	/* Ensure name and function pointer are not NULL */
	{
		f(name);/*Call the function pointed to by f with name*/
	}
}

