#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog.
 * @d: Pointer to the dog to be freed.
 *
 * Description: This function frees the memory for a dog_t structure,
 * including the memory allocated for the dog's name and owner.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)  /* If the pointer is NULL, nothing to free */
		return;

	/* Free the memory allocated for the name and owner */
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);

	/* Free the memory allocated for the dog structure itself */
	free(d);
}

