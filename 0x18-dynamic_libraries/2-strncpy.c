#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strncpy -  function that concatenates two strings until n chars.
 *@dest: string to add the src string.
 *@src: string to be added to the dest string.
 *@n: limit of strings to be added.
 *
 * Return: pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int k = 0;

for (; src[k] != '\0' && k < n; k++)
dest[k] = src[k];
for (; k < n; k++)
dest[k] = '\0';
return (dest);
}
