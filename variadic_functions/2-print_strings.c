#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by a separator and a newline.
 * @separator: The string to be printed between strings.
 * @n: The number of strings to be printed.
 * 
 * Description: This function prints the strings passed as arguments,
 * separated by the given separator string. If the separator is NULL, 
 * no separator is printed between the strings. If any string is NULL,
 * it is replaced with "(nil)". A newline is printed at the end of the output.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    const char *str;

    va_start(args, n);

    for (i = 0; i < n; i++)
    {
        str = va_arg(args, const char*);

        if (i > 0 && separator != NULL)
            printf("%s", separator);

        if (str == NULL)
            printf("(nil)");
        else
            printf("%s", str);
    }

    printf("\n");

    va_end(args);
}

