#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h> /* Pour va_list, va_start, va_arg, va_end */

/* Prototype de la fonction sum_them_all */
int sum_them_all(const unsigned int n, ...);
/* Prototype for print_numbers function */
void print_numbers(const char *separator, const unsigned int n, ...);
/* Prototype de la fonction _putchar */
void print_strings(const char *separator, const unsigned int n, ...);

int _putchar(char c);

#endif /* VARIADIC_FUNCTIONS_H */
