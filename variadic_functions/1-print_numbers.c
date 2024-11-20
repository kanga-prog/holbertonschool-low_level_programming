#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by a separator and a newline.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers to be printed.
 *
 * Description: This function prints the numbers passed as arguments,
 * separated by the given separator string. If the separator is NULL,
 * no separator is printed between the numbers. A newline is printed
 * at the end of the output.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);

		printf("%d", va_arg(args, int));
	}

	printf("\n");

	va_end(args);
}

