#include <stdio.h>

/* Function to print the chessboard */
void print_chessboard(char (*a)[8])
{
	int row, col;

	/* Iterate over the 8x8 chessboard */
	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			putchar(a[row][col]);  /* Print each character */
		}
		putchar('\n');  /* Print a new line after each row */
	}
}
