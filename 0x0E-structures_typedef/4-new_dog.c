#include "dog.h"
/**
 * new_dog - Function that creates a new "instance" from the dog struct
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: If success, a new dog. NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *the_name = name;
	char *the_owner = owner;

	dog_t *new = malloc(sizeof(dog_t));

	if (!new)
		return (free(new), NULL);

	new->name = the_name;
	new->age = age;
	new->owner = the_owner;

	return (new);
}
