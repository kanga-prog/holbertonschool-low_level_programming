#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Entry Point
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of arg types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, n = 0;
	char *separation = ", ";
	char *string;

	va_start(list, format);

	while (format && format[i])
		i++;
	while (format && format[n])
	{
		if (n == (i - 1))
		{
			separation = "";
		}
		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(list, int), separation);
				break;
			case 'i':
				printf("%d%s", va_arg(list, int), separation);
				break;
			case 'f':
				printf("%f%s", va_arg(list, double), separation);
				break;
			case 's':
				string = va_arg(list, char*);
				if (string == NULL)
					string = "(nil)";
				printf("%s%s", string, separation);
				break;
		}
		n++;
	}
	printf("\n");
	va_end(list);
}
