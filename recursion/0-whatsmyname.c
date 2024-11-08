#include <stdio.h>

/**
 * main - prints the name of the program, followed by a new line
 * @argc: The number of arguments
 * @argv: An array of argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc;/* Explicitly ignore 'argc'*/
	printf("%s\n", argv[0]);
	return (0);
}
