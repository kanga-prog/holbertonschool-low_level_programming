#include <stdio.h>

/**
 * reset_to_98 - Updates the value pointed to by n to 98
 * @n: Pointer to an integer
 *
 * This function dereferences the pointer and sets the value to 98.
 */
void reset_to_98(int *n)
{
	*n = 98;
}

/**
 * main - Entry point of the program
 *
 * Initializes an integer variable and demonstrates
 * the reset_to_98 function.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int value = 0;

	printf("Before: %d\n", value);
	reset_to_98(&value);
	printf("After: %d\n", value);

	return (0);
}
