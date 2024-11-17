#ifndef DOG_H
#define DOG_H

/*
 * @name: Le nom du chien (chaîne de caractères).
 * @age: L'âge du chien en années (type float).
 * @owner: Le propriétaire du chien (chaîne de caractères).
 *
 */
struct dog /*Description:informations du chien,nom,age et proprietaire*/
{
	char *name;
	float age;
	char *owner;
};

/*
 * Description de init_dog:
 * Initialise les champs de la structure `dog` avec les valeurs fournies.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

