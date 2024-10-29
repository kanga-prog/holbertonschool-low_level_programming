#include "main.h"

/**
 * print_number - Prints numbers from 0 to 9 on the same line.
 *
 * Return: Nothing.
 */
void print_number(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
	_putchar(a + '0'); // Utilise _putchar pour imprimer chaque chiffre
	}
	_putchar('\n'); // Ajoute une nouvelle ligne à la fin
}
