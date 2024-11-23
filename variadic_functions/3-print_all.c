#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - prints a character
 * @args: list of arguments
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an integer
 * @args: list of arguments
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: list of arguments
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: list of arguments
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char*);

	if (str)
	{
		printf("%s", str);
	}
	else
	{
		printf("(nil)");
	}
}

/**
 * print_all - prints anything depending on the format
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	int printed = 0;

	va_start(args, format);

	while (format && format[i] != '\0')
	{
		if (printed)
		{
			printf(", ");
		}
		switch (format[i])
		{
			case 'c':
				print_char(args);
				break;
			case 'i':
				print_int(args);
				break;
			case 'f':
				print_float(args);
				break;
			case 's':
				print_string(args);
				break;
			default:
				break;
		}
		printed = 1;
		i++;
	}

	va_end(args);
	printf("\n");
}

