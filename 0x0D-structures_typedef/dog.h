#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - Structure for a new dog object
 * @name: String. Name of the dog
 * @age: Float. Dog's age
 * @owner: String. Owner's name
 * Description: A puppy have to be nominated
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
