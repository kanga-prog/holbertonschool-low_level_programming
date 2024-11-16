#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure to represent a dog.
 * @name: Pointer to a string representing the dog's name.
 * @age: The dog's age (in years).
 * @owner: Pointer to a string representing the dog's owner.
 *
 * Description: This structure is used to store information about a dog,
 * including its name, age, and owner's name.
 */
typedef struct dog
{
	char *name;   /* Pointer to the dog's name */
	float age;    /* The dog's age */
	char *owner;  /* Pointer to the dog's owner */
} dog_t;

#endif /* DOG_H */
