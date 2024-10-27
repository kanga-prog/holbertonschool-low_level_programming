#include <unistd.h>

/**
 * times_table - Prints the multiplication table from 0 to 9.
 *
 * Return: void
 */
void times_table(void)
{
	char buffer[6]; /* Buffer to hold the output string */
	int len;        /* Length of the output string */
	int i, j;

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
				buffer[1] = ' ';           /* Space after single digit */
				buffer[2] = '\0';          /* Null terminate */
			}
			else
			{
				buffer[0] = (result / 10) + '0'; /* Tens place */
				buffer[1] = (result % 10) + '0'; /* Units place */
				len = 2;
				buffer[2] = ' ';               /* Space after two digits */
				buffer[3] = '\0';              /* Null terminate */
			}

			write(1, buffer, len + 1); /* Write the result to stdout */

			if (j < 9) /* Avoid adding a comma after the last number */
			{
				write(1, ",  ", 4); /* Write a comma and two spaces */
			}
		}
		write(1, "\n", 1); /* Newline after each row is printed */
	}
}
