#ifndef DOG_H
#define DOG_H

/*
 * struct dog - Représente un chien
 * @name: Le nom du chien (chaîne de caractères).
 * @age: L'âge du chien en années (type float).
 * @owner: Le propriétaire du chien (chaîne de caractères).
 *
 * Description:
 * Cette structure est utilisée pour stocker les informations d'un chien,
 * telles que son nom, son âge et son propriétaire. Elle permet de représenter
 * un chien dans un programme.
 */
struct dog
{
    char *name;  /* Le nom du chien */
    float age;   /* L'âge du chien en années */
    char *owner; /* Le nom du propriétaire du chien */
};

/* Définition de dog_t comme alias de struct dog */
typedef struct dog dog_t;

/**
 * init_dog - Initialise une variable de type struct dog
 * @d: Pointeur vers la structure à initialiser.
 * @name: Nom du chien (chaîne de caractères).
 * @age: Âge du chien (type float).
 * @owner: Nom du propriétaire (chaîne de caractères).
 *
 * Description:
 * Initialise les champs de la structure `dog` avec les valeurs fournies.
 */
void init_dog(dog_t *d, char *name, float age, char *owner);

/**
 * print_dog - Affiche les informations d'un chien
 * @d: Pointeur vers la structure dog à afficher.
 *
 * Description:
 * Cette fonction affiche le nom, l'âge et le propriétaire d'un chien.
 * Si un champ est NULL, "(nil)" est affiché à la place.
 * Si le pointeur d est NULL, rien n'est affiché.
 */
void print_dog(dog_t *d);

#endif /* DOG_H */

