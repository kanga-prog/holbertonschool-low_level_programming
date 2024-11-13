#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 *
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 if the program runs successfully, 1 if an error occurs
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	/* If no arguments are passed (except the program name), print 0 */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Loop through all arguments (excluding the program name argv[0]) */
	for (i = 1; i < argc; i++)
	{
		/* Check if each argument contains only digits */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				/* If any character is not a digit, print "Error" and exit */
				printf("Error\n");
				return (1);
			}
		}

		/* Add the value of the argument to the sum */
		sum += atoi(argv[i]);
	}

	/* Print the sum of the numbers */
	printf("%d\n", sum);
	return (0);
}
