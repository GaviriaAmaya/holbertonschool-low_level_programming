#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - Good bye, friend!
 *dog_t - Typedef of the struct dog
 *@d: Pointer to the memory alloc of name and owner
 *Return: None
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
	free(d->name);
	free(d->owner);
	free(d);
}
}
