#include "holberton.h"
/**
 * _strcpy - Funcction that copies a string
 * @dest: String to save
 * @src: Source string
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	for (len = 0; src[len] != '\0'; len++)
		;


	for (i = 0; dest[i] != len; i++)
		dest[i] = src[i];

	return(dest);
}
