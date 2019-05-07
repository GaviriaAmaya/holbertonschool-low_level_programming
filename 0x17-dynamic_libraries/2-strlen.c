#include "holberton.h"
/**
 *_strlen - Command that returns the length of a string
 *@s: String used
 *Return: Lenght of the string
 */
int _strlen(char *s)
{
int i = 0;

while (s[i] != 0)
{
i++;
}
return (i);
}
