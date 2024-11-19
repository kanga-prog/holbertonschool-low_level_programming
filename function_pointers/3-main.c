#include "3-calc.h"
#include <stdio.h>
#include <unistd.h>  /* For write */

/**
 * main - Entry point to the program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operation)(int, int);

	if (argc != 4)  /* Check for incorrect number of arguments */
	{
		write(2, "Error\n", 6);
		exit(98);
	}

	num1 = atoi(argv[1]);  /* Convert first number to integer */
	num2 = atoi(argv[3]);  /* Convert second number to integer */

	operation = get_op_func(argv[2]);  /* Get the function pointer */

	if (operation == NULL)  /* Check for invalid operator */
	{
		write(2, "Error\n", 6);
		exit(99);
	}

	/* Perform the operation and print the result */
	printf("%d\n", operation(num1, num2));

	return (0);
}

