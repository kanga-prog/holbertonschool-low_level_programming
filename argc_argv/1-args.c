#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv; /* To avoid unused parameter warning */

	printf("%d\n", argc);

	return (0);
}
