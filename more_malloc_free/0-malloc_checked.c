#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc and terminates on failure.
 * @b: The size of memory to allocate in bytes.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, the program terminates with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);  /* Allocate memory of size 'b' */

	if (ptr == NULL)  /* Check if malloc failed */
	{
		exit(98);/* Exit the program with status 98 if malloc fails */
	}

	return (ptr);  /* Return the pointer to the allocated memory */
}
