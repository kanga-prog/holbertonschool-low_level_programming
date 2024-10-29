#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints numbers from 0 to 9 on the same line.
 *
 * Return: Nothing.
 */
void print_number(void)
{
	for (int a = 0; a < 10; a++)
	{
	putchar(a + '0');  // Convertit l'entier en caractère et imprime
	}
	putchar('\n');  // Ajoute une nouvelle ligne à la fin
}
