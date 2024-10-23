#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int Last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_digit = abs(n % 10);

	printf("Last digit of %d is", n);

	if (Last_digit > 5)
		printf(" %d and is greater than 5\n", Last_digit);
	else if (Last_digit == 0)
		printf(" %d and is 0\n", Last_digit);
	else
		printf(" %d and is less than 6 and not 0\n", Last_digit);

	return (0);
}

