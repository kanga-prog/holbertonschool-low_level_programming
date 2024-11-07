#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program
 *        excluding the program name.
 * @argc: The argument count.
 * @argv: The argument vector (array of strings).
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
