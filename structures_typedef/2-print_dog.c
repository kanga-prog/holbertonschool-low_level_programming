#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Affiche les informations d'un chien
 * @d: Pointeur vers la structure dog à afficher.
 *
 * Description:
 * Cette fonction affiche le nom, l'âge et le propriétaire d'un chien.
 * Si un champ est NULL, "(nil)" est affiché à la place.
 * Si le pointeur d est NULL, rien n'est affiché.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %.1f\n", (d->age >= 0) ? d->age : 0.0);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}

