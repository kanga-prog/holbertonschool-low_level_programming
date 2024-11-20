#include "variadic_functions.h"
#include <stdarg.h>  /* For va_list, va_start, va_arg, va_end */
#include <stddef.h>  /* For NULL */

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;
	int j;  /* Declare j here to avoid the "C90" for loop issue */

	/* Initialize the va_list */
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		/* Get the next argument */
		num = va_arg(args, int);

		/* Print the current number */
		_putchar(num);

		if (separator != NULL && i < n - 1)
		{
			/* Print the separator one character at a time */
			for (j = 0; separator[j] != '\0'; j++)
			{
				_putchar(separator[j]);
			}
		}
	}

	/* Print a new line at the end */
	_putchar('\n');

	/* Clean up the va_list */
	va_end(args);
}

