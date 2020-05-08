#include "exercise.h"
/**
 * new_user - Instance the user struct and returns the new data st
 * @name: Name to be assigned
 * @email: Email of the user
 * @age: Age of the user
 * Return: Is success, returns the user. Otherwise, 1
 */
struct User *new_user(char *name, char *email, int age)
{
	struct User *user;

	user = malloc(sizeof(struct User));

	if (user == NULL)
		return (NULL);

	user->name = name;
	user->email = email;
	user->age = age;

	return (user);
}
