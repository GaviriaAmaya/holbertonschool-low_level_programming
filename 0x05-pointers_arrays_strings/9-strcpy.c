#include "holberton.h"
/**
 * _strcpy - Funcction that copies a string
 * @dest: String to save
 * @src: Source string
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int put = 0;

	for (put = 0; src[put] != '\0'; put++)
		dest[put] = src[put];

	return(dest);
}
