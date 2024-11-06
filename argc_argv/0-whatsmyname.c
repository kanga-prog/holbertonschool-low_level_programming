#include <stdio.h>

/**
 * main - Prints the name of the program followed by a new line.
 * @argc: The number of command line arguments.
 * @argv: An array of strings representing the command line arguments.
 *
 * Return: Always 0.
 * @argc(void) pour indiquer que argc n'est pas utilisé.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
