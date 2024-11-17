#include "dog.h"
#include <stddef.h>  /* Ajout de cet en-tête pour utiliser NULL */

/* Fonction pour initialiser une variable de type struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)  /* Vérifier que le pointeur d est valide */
		return;

	d->name = name;    /* Initialiser le nom */
	d->age = age;      /* Initialiser l'âge */
	d->owner = owner;  /* Initialiser le propriétaire */
}
