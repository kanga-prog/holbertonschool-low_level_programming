#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times.
 *
 * This function prints the numbers 0 to 14 ten times,
 * with each number followed by a space.
 * A new line is printed after each set of numbers.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('1'); /* Affiche '1' pour les nombres de 10 à 14 */
			}
			_putchar((j % 10) + '0'); /* Affiche l'unité */
			_putchar(' '); /* Espace entre les nombres */
		}
		_putchar('\n'); /* Nouvelle ligne après chaque série */
	}
}
