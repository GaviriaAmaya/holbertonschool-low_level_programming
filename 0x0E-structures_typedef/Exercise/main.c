#include "exercise.h"
/**
 * main - Access and editing a user, based on a structure
 * Return: Always success
 */
int main(void)
{
	struct User *user;

	user = new_user("Foo", "foo@fighters.com", 19);

	if (user == NULL)
		return (1);

	printf("User %s is created!\n", user->name);
	printf("His email is: %s\n", user->email);
	printf("And he is %d years old\n", user->age);
}
