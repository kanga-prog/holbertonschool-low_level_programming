#include <stdio.h>

/**
 * print_9_times_table - Prints the 9 times table.
 *
 * Return: void
 */
void print_9_times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%2d", i * j);
			if (j < 9)
			{
				printf(",  ");
			}
		}
		printf("$\n");
	}
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0
 */
int main(void)
{
	print_9_times_table();
	return (0);
}
