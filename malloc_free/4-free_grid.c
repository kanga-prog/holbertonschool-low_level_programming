#include <stdlib.h>  /* Pour free */

/**
 * free_grid - libère une grille 2D précédemment allouée
 * @grid: pointeur vers la grille 2D à libérer
 * @height: hauteur de la grille
 *
 * Retourne: rien
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Libérer chaque ligne de la grille */
	if (grid != NULL && height > 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);/* Libérer la mémoire de chaque ligne */
		}

		/* Libérer le tableau de pointeurs (la grille elle-même) */
		free(grid);
	}
}
