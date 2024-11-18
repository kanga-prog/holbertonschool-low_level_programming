#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Pointer to the new dog, or NULL if the function fails.
 *
 * Description: This function dynamically allocates memory for a new dog
 * and copies the given name and owner to ensure the values persist after
 * the function returns. It returns a pointer to the newly created dog,
 * or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	/* Step 1: Allocate memory for the dog structure */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/* Step 2: Allocate memory for the name and owner */
	d->name = malloc(strlen(name) + 1);  /* +1 for null terminator */
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(strlen(owner) + 1);  /* +1 for null terminator */
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	/* Step 3: Copy the name and owner strings */
	strcpy(d->name, name);
	strcpy(d->owner, owner);

	/* Step 4: Set the dog's age */
	d->age = age;

	/* Step 5: Return the newly created dog */
	return (d);
}

/**
 * print_dog - Prints a struct dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * Description: This function prints the name, age, and owner of a dog.
 * If any of these fields are NULL, it prints (nil) instead. If the struct
 * dog pointer is NULL, the function prints nothing.
 */
void print_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}

