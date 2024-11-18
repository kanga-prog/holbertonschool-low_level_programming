#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the elements of a struct dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * Description: This function prints the name, age, and owner of a dog.
 * If any of these fields are NULL, it prints (nil) instead.
 * If the struct dog pointer is NULL, the function prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)  /* If the pointer to struct dog is NULL */
		return;

	/* Print the name or (nil) if name is NULL */
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	/* Print the age */
	printf("Age: %.6f\n", d->age);

	/* Print the owner or (nil) if owner is NULL */
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}

