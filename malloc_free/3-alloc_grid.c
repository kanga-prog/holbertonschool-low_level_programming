#include <stdlib.h>

/**
 * alloc_grid - Alloue une grille 2D et initialise ses éléments à 0.
 * @width: La largeur de la grille.
 * @height: La hauteur de la grille.
 *
 * Return: Un pointeur vers la grille allouée, ou NULL en cas d'échec.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Si la largeur ou la hauteur est négative ou nulle, on retourne NULL */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* Allouer un tableau de pointeurs (les lignes de la grille) */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)  /* Vérifier l'échec de l'allocation */
	{
		return (NULL);
	}

	/* Allouer de la mémoire pour chaque ligne */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)  /* Si l'allocation échoue pour une ligne */
		{
			/* Libérer la mémoire précédemment allouée */
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}

		/* Initialiser les éléments de chaque ligne à 0 */
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}

