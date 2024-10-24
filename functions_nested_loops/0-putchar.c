#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Description: _putchar is generally used to write a character.
 * Prototype: This function indicates its name, return type, and parameters.
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
