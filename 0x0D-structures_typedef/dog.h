#ifndef dog_h
#define dog_h

/**
 *struct dog - Structure of strings and float, about data of a dog
 *@name: String that means the name of the dog
 *@age: Var type Float that represents the age of the dog
 *@owner: String of the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
void free_dog(dog_t *d);
#endif
