#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - copies string
 * @dest: variable to copy the string
 * @src: the string
 *
 * Return: The string
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != 0)
{
dest[i] = src[i];
i++;
}
return (dest);
}
