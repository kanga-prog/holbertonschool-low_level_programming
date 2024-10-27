#include <stdio.h>

/**
 * add_integers - Adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum of a and b
 */
int add_integers(int a, int b)
{
	return (a + b);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int result;

	result = add_integers(3, 5);
	printf("Le résultat est : %d\n", result);
	return (0);
}
