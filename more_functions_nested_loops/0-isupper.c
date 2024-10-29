#include <stdio.h>

/* Prototype for the _isupper function */
int _isupper(int c);

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char test_chars[] = {'A', 'a', 'Z', '1', '!', 'M'};
	char c;
	int i;

	for (i = 0; i < sizeof(test_chars) / sizeof(test_chars[0]); i++)
	{
	c = test_chars[i];
	printf("%c: ", c);
	_isupper(c);  /* Call to the _isupper function */
	putchar('\n'); /* New line for better output readability */
	}

	return (0);
}
