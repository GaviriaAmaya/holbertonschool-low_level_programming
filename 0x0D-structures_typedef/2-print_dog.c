#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *print_dog - Prints the structure "dog"
 *@d: Pointer to the struct dog
 *
 *Return: None
 */
void print_dog(struct dog *d)
{
char *altname;
char *altown;

	if (d != NULL)
	{
		if (d->name == NULL)
		{
			altname = "(nil)";
		}
		else
		{
			altname = d->name;
		}

		if (d->owner == NULL)
		{
			altown = "(nil)";
		}
		else
		{
			altown = d->owner;
		}

		printf("Name: %s\nAge: %f\nOwner: %s\n", altname, d->age, altown);
	}
}
