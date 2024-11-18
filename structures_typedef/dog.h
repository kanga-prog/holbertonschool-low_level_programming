#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/*
 * File: dog.h
 * Auth: kanga brice
 * Desc: header file that defines a new type struct
 */

/**
 * struct dog - a new type describing a dog.
 * @name: Le nom du chien (chaîne de caractères).
 * @age: L'âge du chien en années (type float).
 * @owner: Le propriétaire du chien (chaîne de caractères).
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
/* Function prototypes */
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(dog_t *d);
void free_dog(dog_t *d);
#endif
