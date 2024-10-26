#include <stdio.h>

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i; /* Variable for the multiplier */
	int result; /* Variable for the result */

	for (i = 0; i <= 9; i++)
	{
		result = 9 * i; /* Calculate the result */
		printf("%d", result); /* Print the result */
		if (i < 9) /* Avoid adding a comma after the last number */
		{
			printf(", "); /* Print a comma and space */
		}
	}
	printf("\n"); /* Newline after the row is printed */
}
