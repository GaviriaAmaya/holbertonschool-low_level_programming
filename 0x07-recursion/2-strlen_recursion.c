#include "holberton.h"
/**
 *_strlen_recursion - Prints the number of chars of a string
 *@s: String to compare
 *
 *Return: Number of chars of the string
 */
int _strlen_recursion(char *s)
{
	if (*(s) != '\0')
	{
		return(1 + _strlen_recursion(s + 1));
	}
	else
		return(0);

}
