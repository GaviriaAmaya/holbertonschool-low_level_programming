#include "holberton.h"
/**
 *_strlen - Calculates the lenght of a string
 *@s: String received
 *Return: Lenght of a string
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
	lenght++;

	return (lenght);
}
