#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - Prints a character.
 * @args: The list of arguments.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer.
 * @args: The list of arguments.
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @args: The list of arguments.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string.
 * @args: The list of arguments.
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

/**
 * print_all - Prints anything based on the format string.
 * @format: A string of characters representing the argument types.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	unsigned int j = 0;

	/* Function pointers array to handle each type */
	void (*functions[])(va_list) = {
		print_char, print_int, print_float, print_string
	};
	char types[] = {'c', 'i', 'f', 's'};

	va_start(args, format);

	/* Iterate through the format string */
	while (format && format[i])
	{
		j = 0;

		/* Check the type and call the respective function */
		while (types[j] != '\0')
		{
			if (format[i] == types[j])
			{
				if (i > 0)
					printf(", ");
				functions[j](args);
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);

	printf("\n");
}

