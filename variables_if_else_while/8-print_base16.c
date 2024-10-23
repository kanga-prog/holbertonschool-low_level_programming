#include <stdio.h>
/**
 * main - Entry point
 * Description: Generates random number and prints the last digit
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 16; digit++)
	{
		if (digit < 10)
			putchar(digit + '0');
		else
			putchar(digit - 10 + 'a');
	}
	putchar('\n');

	return (0);
}

