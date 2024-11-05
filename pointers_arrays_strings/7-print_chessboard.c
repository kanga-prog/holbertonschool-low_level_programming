#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard from a given 2D array
 * @board: A 2D array representing the chessboard
 *
 * Description: This function prints a chessboard based on the pieces stored
 * in the provided 2D array. Each row is printed on a new line.
 */
void print_chessboard(char board[8][8])
{
	int row, col;

	/* Iterate over the rows */
	for (row = 0; row < 8; row++)
	{
		/* Print the row with no space between pieces */
		for (col = 0; col < 8; col++)
		{
			printf("%c", board[row][col]);
		}

		/* After printing each row, print a new line */
		printf("\n");

		/* Print a blank line for rows 3 to 6 (index 2 to 5) */
		if (row == 1 || row == 6)
		{
			printf("\n");
		}
	}
}
