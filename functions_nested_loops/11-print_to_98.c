#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
	int i;  /* Declare loop variable outside */

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i > 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}

/**
 * main - Entry point for the program
 * Return: Always 0
 */
int main(void)
{
	print_to_98(95);  /* Example usage */
	return (0);
}
