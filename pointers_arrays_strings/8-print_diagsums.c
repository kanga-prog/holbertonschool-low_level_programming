#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: The matrix (represented as a flat array)
 * @size: The size of the matrix (number of rows or columns)
 *
 * Description: This function calculates and prints the sum of the elements
 * in the main diagonal and the secondary diagonal of a square matrix.
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i;

	/* Calculate the sum of the main diagonal */
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i); /* Main diagonal: a[i][i] */
		sum2 += *(a + i * size + (size - 1 - i));
	}

	/* Print the results */
	printf("%d, %d\n", sum1, sum2);
}
