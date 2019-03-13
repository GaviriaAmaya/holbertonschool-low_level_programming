#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *_strdup - Duplicates an string
 *@str: Source string
 *Return: NULL if fails, Dest if success
 */
char *_strdup(char *str)
{
int i, i2;
char *p;

if (!str)
	{
	return (0);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	p = malloc(i * sizeof(char) + 1);

	if (p == NULL)
	{
	return (NULL);
	}

	for (i2 = 0; i2 < i; i2++)
	{
	p[i2] = str[i];
	return (p);
	}
	}
return (p);
}
/**
 *new_dog - Function that creates other struct for a new dog
 *@name: Pointer to a string of the name of the dog
 *@age: Age of the dog, defined by float number
 *@owner: Pointer to a string that defines the name of the owner
 *Return: If success (0). If error, NULL and free
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *the_dog;

	the_dog = malloc(sizeof(dog_t));
		if (the_dog == NULL)
		{
			return (NULL);
		}

	if (name)
	{
	the_dog->name = _strdup(name);
	if (the_dog->name == NULL)
	{
		free(the_dog);
	}
	}

	the_dog->age = age;

	if (owner)
	{
		the_dog->owner = _strdup(owner);

			if (the_dog->owner == NULL)
			{

			if (the_dog->name != 0)

				free(the_dog->name);
				free(the_dog);
			}
	}

return (the_dog);

}

