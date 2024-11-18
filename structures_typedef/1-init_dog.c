#include "dog.h"
#include <stddef.h>  /* Ajout de cet en-tête pour utiliser NULL */

/**
 * init_dog - Initialiser une variable de type struct dog.
 * @d: Pointeur vers la structure dog à initialiser.
 * @name: Le nom du chien (chaîne de caractères).
 * @age: L'âge du chien en années (type float).
 * @owner: Le propriétaire du chien (chaîne de caractères).
 *
 * Description : Cette fonction initialise les membres d'une structure dog
 * avec les valeurs passées en argument.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL) /* Vérifier que le pointeur d est valide */
		return;

	d->name = name;   /* Initialiser le nom */
	d->age = age;     /* Initialiser l'âge */
	d->owner = owner; /* Initialiser le propriétaire */
}
