#include "dog.h"
/**
 * init_dog - Initialize a dog struct variable
 * @d: Pointer to the dog structure
 * @name: String: Fills the name field of the structure
 * @age: Float: Age of the dog initialized
 * @owner: String: Dog's Owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
