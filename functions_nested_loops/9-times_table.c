#include <unistd.h>

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i;          /* Variable for the row */
	int j;          /* Variable for the column */
	char buffer[5]; /* Buffer to hold the output string */
	int len;        /* Length of the output string */

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int result = i * j; /* Calculate the result */

			/* Convert the result to a string */
			if (result < 10)
			{
				buffer[0] = result + '0'; /* Single digit */
				len = 1;
			}
			else
			{
				buffer[0] = (result / 10) + '0'; /* Tens place */
				buffer[1] = (result % 10) + '0'; /* Units place */
				len = 2;
			}

			write(1, buffer, len); /* Write the result to stdout */

			if (j < 9) /* Avoid adding a comma after the last number */
			{
				write(1, ", ", 2); /* Write a comma and space */
			}
		}
		write(1, "\n", 1); /* Newline after each row is printed */
	}
}
