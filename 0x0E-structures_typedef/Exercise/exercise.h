#ifndef EXERCISE_H
#define EXERCISE_H

#include <stdlib.h>
#include <stdio.h>
/**
 * struct User - Defines a new user
 * @name: String
 * @email: String
 * @age: Integer
 * Description: An exercise to define structure accessibility and params
 */
struct User
{
	char *name;
	char *email;
	int age;
};

struct User *new_user(char *name, char *email, int age);

#endif
