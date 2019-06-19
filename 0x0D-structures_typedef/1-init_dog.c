#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - Initializes structure dog
 *@d: Pointer to the structure
 *@name: String of the name of the dog
 *@age: Var type float of the age of the dog
 *@owner: String of the name of the owner
 *Return: Void if success. If fails, NULL
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
