#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - Structure for a new dog object
 * @name: String. Name of the dog
 * @age: Float. Dog's age
 * @owner: String. Owner's name
 * Description: A puppy have to be nominated
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
